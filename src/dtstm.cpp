#include <hesim/statevals.h>

/***************************************************************************//** 
 * @ingroup dtstm
 * Health state probability output
 * Stores output of state probabilities simulated using a discrete time
 * state transition model
 ******************************************************************************/ 
// struct stateprobs_out{
//   std::vector<int> sample_; ///< The random sample of the parameters.
//   std::vector<int> strategy_id_; ///< The treatment strategy id.
//   std::vector<int> patient_id_; ////< The patient id.
//   std::vector<int> t_; ////< Time.
//   arma::mat probs_; ////Matrix of state probability vectors. 
//   
//   /** 
//    * A constructor.
//    * Instantiates an empty data container for storing output.
//    * @param n_rows Each ID variable is initialized to have length @p n_rows.
//    * The number of rows in  @c probs_ is equal to @p n_rows.
//    * @param n_cols. The number of columns (i.e., health states) in @c probs_.
//    */ 
//   stateprobs_out(int n_rows, int n_cols) {
//     sample_.resize(n_rows);
//     strategy_id_.resize(n_rows);
//     patient_id_.resize(n_rows);
//     t_.resize(n_rows);
//     probs_.set_size(n_rows, n_cols);
//   }
//   
//   /** 
//    * Create a list to pass to @c R.
//    */   
//   Rcpp::List create_R_list(){
//     Rcpp::DataFrame id_vars = Rcpp::DataFrame::create(
//       Rcpp::_["sample"] = sample_,
//       Rcpp::_["strategy_id"] = strategy_id_,
//       Rcpp::_["patient_id"] = patient_id_,
//       Rcpp::_["t"] = t_,
//       Rcpp::_["stringsAsFactors"] = false
//     );
//     
//     return Rcpp::List::create(
//       Rcpp::_["id_vars"] = id_vars,
//       Rcpp::_["stateprobs"] = probs_
//     );
//   }
//     
//     /** 
//      * Create a tidy dataframe to pass to @c R.
//      */  
//     Rcpp::DataFrame create_R_tidy_df(int n_times, std::vector<double> times){    
//       int n_states = probs_.n_cols;
//       int mat_N = sample_.size();
//       int tidy_N = n_states * mat_N;
//       std::vector<int> sample(tidy_N);
//       std::vector<int> strategy_id(tidy_N);
//       std::vector<int> patient_id(tidy_N);
//       std::vector<int> state_id(tidy_N);
//       std::vector<int> t(tidy_N);
//       std::vector<double> probs(tidy_N);
//       int old_index = 0;
//       int current_state_id = 0;
//       for (int i = 0; i < mat_N/n_times; ++i){
//         for (int j = 0; j < n_times; ++j){
//           for (int k = 0; k < n_states; ++k){
//             sample[old_index] = sample_[i]; 
//             strategy_id[old_index] = strategy_id_[i];
//             patient_id[old_index] = patient_id_[i];
//             state_id[old_index] = current_state_id;
//             t[index] = times[j];
//             probs[index] = probs_(old_index, k);
//           } // End state loop
//           ++current_state_id;
//           ++old_index;
//         } // End time loop
//       } // End outer loop
//       return Rcpp::DataFrame::create(
//         Rcpp::_["sample"] = sample,
//         Rcpp::_["strategy_id"] = strategy_id,
//         Rcpp::_["patient_id"] = patient_id,
//         Rcpp::_["state_id"] = state_id,
//         Rcpp::_["t"] = t,
//         Rcpp::_["probs"] = probs,
//         Rcpp::_["stringsAsFactors"] = false
//       );
//     }
//   
// }; // end struct stateprobs_out

/***************************************************************************//** 
 * @ingroup dtstm
 * Simulate Markov chain
 * Simulate Markov chain for a single patient and treatment strategy.
 * @return An armadillo matrix
 ******************************************************************************/ 
arma::mat sim_markov_chain2(hesim::statmods::obs_index &obs_index,
                            int transprob_index,
                           arma::cube &transprob_mats, arma::rowvec x0,
                           int n_times, std::vector<double> times, int n_states){
  arma::mat x(n_times, n_states);
  x.row(0) = x0;
  int time_index = 0;
  for (int t = 1; t < n_times; ++t){
    if (times[t] > obs_index.get_time_stop()){
      ++time_index;
      obs_index.set_time_index(time_index);
    } 
    x.row(t) = x.row(t - 1) * transprob_mats.slice(transprob_index);
  }
  return x;
}

arma::mat sim_markov_chain(const arma::cube &p,
                            const arma::rowvec &x0,
                            const std::vector<double> &times,
                            const std::vector<double> &time_stop){
  int n_states = p.n_cols;
  int n_times = times.size();
  arma::mat x(n_times, n_states);
  int time_interval = 0;
  arma::mat p_t = p.slice(0);
  x.row(0) = x0;
  for (int t = 1; t < n_times; ++t){
    // Match transition probability matrix to time period
    if (times[t] > time_stop[time_interval]){
      ++time_interval; 
      p_t = p.slice(time_interval);
    }
    
    // Compute state probabilities
    x.row(t) = x.row(t - 1) * p_t;
  } // End loop over time periods
  
  return x;
}

/***************************************************************************//** 
 * @ingroup dtstm
 * Simulate health state probabilities with a cohort discrete time state 
 * transition model
 * This function is exported to @c R and used in @c CohortDtstm$sim_stateprobs().
 * @param R_CohortDtstmTrans An R object of class @c CohortDtstmTrans.
 * @return An R data frame of the same format as dtstm::disease_prog.
 ******************************************************************************/ 
// [[Rcpp::export]]
Rcpp::DataFrame C_cohort_dtstm_sim_stateprobs(Rcpp::Environment R_CohortDtstmTrans,
                                        std::vector<double> times,
                                        int n_samples){
  // Initialize 
  Rcpp::List R_params = Rcpp::as<Rcpp::List>(R_CohortDtstmTrans["params"]);
  arma::cube transprob_mats = Rcpp::as<arma::cube>(R_params["value"]);
  arma::rowvec start_stateprobs = Rcpp::as<arma::rowvec>(R_CohortDtstmTrans["start_stateprobs"]);
  hesim::statmods::obs_index obs_index(hesim::statmods::get_id_object(R_CohortDtstmTrans));
  int n_states = transprob_mats.slice(0).n_rows;
  int n_times = times.size();
  int N = n_samples * obs_index.n_strategies_ * obs_index.n_patients_ * n_states * n_times;
  int n_time_intervals = obs_index.time_stop_.size();
  hesim::stateprobs_out out(N);
  
  // Compute state probabilities
  int counter = 0;
  for (int s = 0; s < n_samples; ++s){
    for (int k = 0; k < obs_index.n_strategies_; ++k){
      obs_index.set_strategy_index(k);
      for (int i = 0; i< obs_index.n_patients_; ++ i){
        obs_index.set_patient_index(i);
        
        // Simulate Markov chain
        int transprob_index = obs_index() + s * transprob_mats.n_slices/n_samples;
        arma::cube p_ski = transprob_mats.slices(transprob_index,
                                                 transprob_index + n_time_intervals - 1);
        arma::mat probs = sim_markov_chain(p_ski, start_stateprobs,
                                           times, obs_index.time_stop_);
        // arma::mat probs = sim_markov_chain2(obs_index, transprob_index,
        //                                     transprob_mats,
        //                                    start_stateprobs, n_times, times,
        //                                    n_states);
        for (int h = 0; h < n_states; ++h){
          for (int t = 0; t < n_times; ++t){
            out.sample_[counter] = s;
            out.strategy_id_[counter] = obs_index.get_strategy_id();
            out.patient_id_[counter] = obs_index.get_patient_id();
            out.state_id_[counter] = h;
            out.t_[counter] = times[t];
            out.prob_[counter] = probs(t, h);
            ++counter;                   
          } // end cycles loop
        } // end state loop
      } // end patient loop
    } // end strategy loop
  } // end samples loop

    return(out.create_R_data_frame());
}





