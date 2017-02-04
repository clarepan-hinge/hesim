// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mlogit_prob
arma::rowvec mlogit_prob(arma::mat beta, arma::rowvec x, int ncat);
RcppExport SEXP hesim_mlogit_prob(SEXP betaSEXP, SEXP xSEXP, SEXP ncatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncat(ncatSEXP);
    rcpp_result_gen = Rcpp::wrap(mlogit_prob(beta, x, ncat));
    return rcpp_result_gen;
END_RCPP
}
// predict_MCMCmnlC
arma::cube predict_MCMCmnlC(arma::mat beta, arma::mat x, int ncat);
RcppExport SEXP hesim_predict_MCMCmnlC(SEXP betaSEXP, SEXP xSEXP, SEXP ncatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ncat(ncatSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_MCMCmnlC(beta, x, ncat));
    return rcpp_result_gen;
END_RCPP
}
// vecmax_index
int vecmax_index(std::vector<double> x);
RcppExport SEXP hesim_vecmax_index(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vecmax_index(x));
    return rcpp_result_gen;
END_RCPP
}
// vecmax
double vecmax(std::vector<double> x);
RcppExport SEXP hesim_vecmax(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vecmax(x));
    return rcpp_result_gen;
END_RCPP
}
// rowmaxC
arma::colvec rowmaxC(arma::mat x);
RcppExport SEXP hesim_rowmaxC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowmaxC(x));
    return rcpp_result_gen;
END_RCPP
}
// stdmean
double stdmean(std::vector<double> v);
RcppExport SEXP hesim_stdmean(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(stdmean(v));
    return rcpp_result_gen;
END_RCPP
}
// rowmax_indC
arma::ucolvec rowmax_indC(arma::mat x);
RcppExport SEXP hesim_rowmax_indC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowmax_indC(x));
    return rcpp_result_gen;
END_RCPP
}
// incr_effectC
std::vector<double> incr_effectC(std::vector<double> x, std::vector<double> y, int nsims, int narms, int ngrps);
RcppExport SEXP hesim_incr_effectC(SEXP xSEXP, SEXP ySEXP, SEXP nsimsSEXP, SEXP narmsSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type narms(narmsSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(incr_effectC(x, y, nsims, narms, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// ceacC
std::vector<double> ceacC(std::vector<double> k, std::vector<double> ie, std::vector<double> ic, int nsims, int narms, int ngrps);
RcppExport SEXP hesim_ceacC(SEXP kSEXP, SEXP ieSEXP, SEXP icSEXP, SEXP nsimsSEXP, SEXP narmsSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ie(ieSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ic(icSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type narms(narmsSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(ceacC(k, ie, ic, nsims, narms, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// mceC
std::vector<double> mceC(std::vector<double> k, std::vector<double> e, std::vector<double> c, int nsims, int narms, int ngrps);
RcppExport SEXP hesim_mceC(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP nsimsSEXP, SEXP narmsSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type narms(narmsSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(mceC(k, e, c, nsims, narms, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// VstarC
std::vector<double> VstarC(std::vector<double> k, std::vector<double> e, std::vector<double> c, int nsims, int narms, int ngrps);
RcppExport SEXP hesim_VstarC(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP nsimsSEXP, SEXP narmsSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type narms(narmsSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(VstarC(k, e, c, nsims, narms, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// transprob_addmort
arma::mat transprob_addmort(arma::mat p, arma::rowvec pmort, int nstates, arma::rowvec zerovec, arma::rowvec onescalar);
RcppExport SEXP hesim_transprob_addmort(SEXP pSEXP, SEXP pmortSEXP, SEXP nstatesSEXP, SEXP zerovecSEXP, SEXP onescalarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type pmort(pmortSEXP);
    Rcpp::traits::input_parameter< int >::type nstates(nstatesSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type zerovec(zerovecSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type onescalar(onescalarSEXP);
    rcpp_result_gen = Rcpp::wrap(transprob_addmort(p, pmort, nstates, zerovec, onescalar));
    return rcpp_result_gen;
END_RCPP
}
// markov_cohort_transC
arma::mat markov_cohort_transC(arma::mat z0, arma::vec ncycles, arma::cube& pmat, arma::vec pmat_index, bool mortadj, arma::cube mortprob, arma::vec mortprob_index);
RcppExport SEXP hesim_markov_cohort_transC(SEXP z0SEXP, SEXP ncyclesSEXP, SEXP pmatSEXP, SEXP pmat_indexSEXP, SEXP mortadjSEXP, SEXP mortprobSEXP, SEXP mortprob_indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type z0(z0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ncycles(ncyclesSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type pmat(pmatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pmat_index(pmat_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type mortadj(mortadjSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type mortprob(mortprobSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mortprob_index(mortprob_indexSEXP);
    rcpp_result_gen = Rcpp::wrap(markov_cohort_transC(z0, ncycles, pmat, pmat_index, mortadj, mortprob, mortprob_index));
    return rcpp_result_gen;
END_RCPP
}
// factorialC
unsigned int factorialC(unsigned int n);
RcppExport SEXP hesim_factorialC(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(factorialC(n));
    return rcpp_result_gen;
END_RCPP
}
// pv1
double pv1(double t1, double t2, double a, double r);
RcppExport SEXP hesim_pv1(SEXP t1SEXP, SEXP t2SEXP, SEXP aSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< double >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(pv1(t1, t2, a, r));
    return rcpp_result_gen;
END_RCPP
}
// exponent_int
double exponent_int(double r, unsigned int p, double t, double h);
RcppExport SEXP hesim_exponent_int(SEXP rSEXP, SEXP pSEXP, SEXP tSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(exponent_int(r, p, t, h));
    return rcpp_result_gen;
END_RCPP
}
// poly_int
double poly_int(double r, unsigned int p, double t, double h, std::vector<double> a);
RcppExport SEXP hesim_poly_int(SEXP rSEXP, SEXP pSEXP, SEXP tSEXP, SEXP hSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(poly_int(r, p, t, h, a));
    return rcpp_result_gen;
END_RCPP
}
// pv_poly
double pv_poly(double r, unsigned int p, double t1, double t2, double h, std::vector<double> a);
RcppExport SEXP hesim_pv_poly(SEXP rSEXP, SEXP pSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP hSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< double >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(pv_poly(r, p, t1, t2, h, a));
    return rcpp_result_gen;
END_RCPP
}
// qgompertzC
double qgompertzC(double p, double shape, double rate);
RcppExport SEXP hesim_qgompertzC(SEXP pSEXP, SEXP shapeSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(qgompertzC(p, shape, rate));
    return rcpp_result_gen;
END_RCPP
}
// rgompertzC
double rgompertzC(double shape, double rate);
RcppExport SEXP hesim_rgompertzC(SEXP shapeSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(rgompertzC(shape, rate));
    return rcpp_result_gen;
END_RCPP
}
// rsurv
double rsurv(double location, double anc1, std::string dist);
RcppExport SEXP hesim_rsurv(SEXP locationSEXP, SEXP anc1SEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type anc1(anc1SEXP);
    Rcpp::traits::input_parameter< std::string >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(rsurv(location, anc1, dist));
    return rcpp_result_gen;
END_RCPP
}
// pv_splines
double pv_splines(double t1, double t2, int state, double r, arma::vec x, arma::vec beta, arma::vec poly_beta, arma::vec poly_deg, arma::vec knots);
RcppExport SEXP hesim_pv_splines(SEXP t1SEXP, SEXP t2SEXP, SEXP stateSEXP, SEXP rSEXP, SEXP xSEXP, SEXP betaSEXP, SEXP poly_betaSEXP, SEXP poly_degSEXP, SEXP knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< double >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< int >::type state(stateSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type poly_beta(poly_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type poly_deg(poly_degSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type knots(knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(pv_splines(t1, t2, state, r, x, beta, poly_beta, poly_deg, knots));
    return rcpp_result_gen;
END_RCPP
}
// notinvec
bool notinvec(int item, std::vector<int> v);
RcppExport SEXP hesim_notinvec(SEXP itemSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(notinvec(item, v));
    return rcpp_result_gen;
END_RCPP
}
// nxttime
double nxttime(double current_time, double time_jump, double maxt);
RcppExport SEXP hesim_nxttime(SEXP current_timeSEXP, SEXP time_jumpSEXP, SEXP maxtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type current_time(current_timeSEXP);
    Rcpp::traits::input_parameter< double >::type time_jump(time_jumpSEXP);
    Rcpp::traits::input_parameter< double >::type maxt(maxtSEXP);
    rcpp_result_gen = Rcpp::wrap(nxttime(current_time, time_jump, maxt));
    return rcpp_result_gen;
END_RCPP
}
// matS
arma::mat matS(int index, arma::cube cube, int ntrans, int k);
RcppExport SEXP hesim_matS(SEXP indexSEXP, SEXP cubeSEXP, SEXP ntransSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type cube(cubeSEXP);
    Rcpp::traits::input_parameter< int >::type ntrans(ntransSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(matS(index, cube, ntrans, k));
    return rcpp_result_gen;
END_RCPP
}
// updateAge
arma::vec updateAge(arma::vec x, double age, int col);
RcppExport SEXP hesim_updateAge(SEXP xSEXP, SEXP ageSEXP, SEXP colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type age(ageSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    rcpp_result_gen = Rcpp::wrap(updateAge(x, age, col));
    return rcpp_result_gen;
END_RCPP
}
// sim_msmC
List sim_msmC(arma::cube loc_beta, arma::mat loc_x, std::vector<std::string> dist, arma::mat tmat, arma::vec anc1, std::vector<int> absorbing, int maxt, int maxage, int agecol);
RcppExport SEXP hesim_sim_msmC(SEXP loc_betaSEXP, SEXP loc_xSEXP, SEXP distSEXP, SEXP tmatSEXP, SEXP anc1SEXP, SEXP absorbingSEXP, SEXP maxtSEXP, SEXP maxageSEXP, SEXP agecolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type loc_beta(loc_betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type loc_x(loc_xSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type dist(distSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tmat(tmatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type anc1(anc1SEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type absorbing(absorbingSEXP);
    Rcpp::traits::input_parameter< int >::type maxt(maxtSEXP);
    Rcpp::traits::input_parameter< int >::type maxage(maxageSEXP);
    Rcpp::traits::input_parameter< int >::type agecol(agecolSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_msmC(loc_beta, loc_x, dist, tmat, anc1, absorbing, maxt, maxage, agecol));
    return rcpp_result_gen;
END_RCPP
}
// sim_msm_pvC
arma::vec sim_msm_pvC(arma::vec id, arma::vec sim, arma::vec age, arma::vec state, arma::vec final, arma::vec time, std::vector<int> absorbing, double r, arma::mat x, int agecol, arma::mat beta, arma::mat poly_beta, arma::mat poly_deg, arma::mat knots);
RcppExport SEXP hesim_sim_msm_pvC(SEXP idSEXP, SEXP simSEXP, SEXP ageSEXP, SEXP stateSEXP, SEXP finalSEXP, SEXP timeSEXP, SEXP absorbingSEXP, SEXP rSEXP, SEXP xSEXP, SEXP agecolSEXP, SEXP betaSEXP, SEXP poly_betaSEXP, SEXP poly_degSEXP, SEXP knotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type id(idSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sim(simSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type age(ageSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type state(stateSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type final(finalSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type absorbing(absorbingSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type agecol(agecolSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type poly_beta(poly_betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type poly_deg(poly_degSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type knots(knotsSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_msm_pvC(id, sim, age, state, final, time, absorbing, r, x, agecol, beta, poly_beta, poly_deg, knots));
    return rcpp_result_gen;
END_RCPP
}
// sim_state_t
std::vector<double> sim_state_t(std::vector<int> state, std::vector<double> time, std::vector<int> final, double t, int simindivs);
RcppExport SEXP hesim_sim_state_t(SEXP stateSEXP, SEXP timeSEXP, SEXP finalSEXP, SEXP tSEXP, SEXP simindivsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type state(stateSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type time(timeSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type final(finalSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type simindivs(simindivsSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_state_t(state, time, final, t, simindivs));
    return rcpp_result_gen;
END_RCPP
}
// sim_transprobC
std::vector<double> sim_transprobC(std::vector<int> state, std::vector<double> time, std::vector<int> final, std::vector<double> t, int simindivs, int nstates);
RcppExport SEXP hesim_sim_transprobC(SEXP stateSEXP, SEXP timeSEXP, SEXP finalSEXP, SEXP tSEXP, SEXP simindivsSEXP, SEXP nstatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type state(stateSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type time(timeSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type final(finalSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type simindivs(simindivsSEXP);
    Rcpp::traits::input_parameter< int >::type nstates(nstatesSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_transprobC(state, time, final, t, simindivs, nstates));
    return rcpp_result_gen;
END_RCPP
}
// matrix_byrow
arma::mat matrix_byrow(arma::rowvec v, int nrow, int ncol);
RcppExport SEXP hesim_matrix_byrow(SEXP vSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_byrow(v, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// matrix_bycol
arma::mat matrix_bycol(arma::rowvec v, int nrow, int ncol);
RcppExport SEXP hesim_matrix_bycol(SEXP vSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_bycol(v, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
