// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/hesim.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// vecmax_index
int vecmax_index(std::vector<double> x);
RcppExport SEXP _hesim_vecmax_index(SEXP xSEXP) {
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
RcppExport SEXP _hesim_vecmax(SEXP xSEXP) {
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
RcppExport SEXP _hesim_rowmaxC(SEXP xSEXP) {
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
RcppExport SEXP _hesim_stdmean(SEXP vSEXP) {
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
RcppExport SEXP _hesim_rowmax_indC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowmax_indC(x));
    return rcpp_result_gen;
END_RCPP
}
// incr_effectC
std::vector<double> incr_effectC(std::vector<double> x, std::vector<double> y, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_incr_effectC(SEXP xSEXP, SEXP ySEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(incr_effectC(x, y, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// ceacC
std::vector<double> ceacC(std::vector<double> k, std::vector<double> ie, std::vector<double> ic, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_ceacC(SEXP kSEXP, SEXP ieSEXP, SEXP icSEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ie(ieSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ic(icSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(ceacC(k, ie, ic, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// mceC
std::vector<double> mceC(std::vector<double> k, std::vector<double> e, std::vector<double> c, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_mceC(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(mceC(k, e, c, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// VstarC
std::vector<double> VstarC(std::vector<double> k, std::vector<double> e, std::vector<double> c, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_VstarC(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(VstarC(k, e, c, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// qgompertz
double qgompertz(double p, double shape, double rate);
static SEXP _hesim_qgompertz_try(SEXP pSEXP, SEXP shapeSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(qgompertz(p, shape, rate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_qgompertz(SEXP pSEXP, SEXP shapeSEXP, SEXP rateSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_qgompertz_try(pSEXP, shapeSEXP, rateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rgompertz
double rgompertz(double shape, double rate);
static SEXP _hesim_rgompertz_try(SEXP shapeSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(rgompertz(shape, rate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rgompertz(SEXP shapeSEXP, SEXP rateSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rgompertz_try(shapeSEXP, rateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// qllogis
double qllogis(double p, double shape, double scale, int lt, int lg);
static SEXP _hesim_qllogis_try(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP ltSEXP, SEXP lgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< int >::type lt(ltSEXP);
    Rcpp::traits::input_parameter< int >::type lg(lgSEXP);
    rcpp_result_gen = Rcpp::wrap(qllogis(p, shape, scale, lt, lg));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_qllogis(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP ltSEXP, SEXP lgSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_qllogis_try(pSEXP, shapeSEXP, scaleSEXP, ltSEXP, lgSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rllogis
double rllogis(double shape, double scale);
static SEXP _hesim_rllogis_try(SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rllogis(shape, scale));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rllogis(SEXP shapeSEXP, SEXP scaleSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rllogis_try(shapeSEXP, scaleSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rgengamma
double rgengamma(double mu, double sigma, double Q);
static SEXP _hesim_rgengamma_try(SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(rgengamma(mu, sigma, Q));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rgengamma(SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rgengamma_try(muSEXP, sigmaSEXP, QSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rgengamma_vec
std::vector<double> rgengamma_vec(int n, std::vector<double> mu, std::vector<double> sigma, std::vector<double> Q);
static SEXP _hesim_rgengamma_vec_try(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mu(muSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(rgengamma_vec(n, mu, sigma, Q));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rgengamma_vec(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rgengamma_vec_try(nSEXP, muSEXP, sigmaSEXP, QSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rtruncnorm
double rtruncnorm(double mean, double sd, double lower, double upper);
static SEXP _hesim_rtruncnorm_try(SEXP meanSEXP, SEXP sdSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(rtruncnorm(mean, sd, lower, upper));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rtruncnorm(SEXP meanSEXP, SEXP sdSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rtruncnorm_try(meanSEXP, sdSEXP, lowerSEXP, upperSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rpwexp
double rpwexp(arma::rowvec rate, arma::rowvec time);
static SEXP _hesim_rpwexp_try(SEXP rateSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(rpwexp(rate, time));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rpwexp(SEXP rateSEXP, SEXP timeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rpwexp_try(rateSEXP, timeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rpwexp_vec
std::vector<double> rpwexp_vec(int n, arma::mat rate, arma::rowvec time);
static SEXP _hesim_rpwexp_vec_try(SEXP nSEXP, SEXP rateSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(rpwexp_vec(n, rate, time));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rpwexp_vec(SEXP nSEXP, SEXP rateSEXP, SEXP timeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rpwexp_vec_try(nSEXP, rateSEXP, timeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcat
int rcat(arma::rowvec probs);
static SEXP _hesim_rcat_try(SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcat(probs));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rcat(SEXP probsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rcat_try(probsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcat_vec
arma::vec rcat_vec(int n, arma::mat probs);
static SEXP _hesim_rcat_vec_try(SEXP nSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcat_vec(n, probs));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rcat_vec(SEXP nSEXP, SEXP probsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rcat_vec_try(nSEXP, probsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rdirichlet
arma::rowvec rdirichlet(arma::rowvec alpha);
static SEXP _hesim_rdirichlet_try(SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(rdirichlet(alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rdirichlet(SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rdirichlet_try(alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rdirichlet_mat
arma::cube rdirichlet_mat(int n, arma::mat alpha);
static SEXP _hesim_rdirichlet_mat_try(SEXP nSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(rdirichlet_mat(n, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rdirichlet_mat(SEXP nSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rdirichlet_mat_try(nSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// C_DisModSurv_summary
arma::mat C_DisModSurv_summary(Rcpp::Environment R_DisModSurv, double discount_rate, std::vector<double> x, std::string type);
static SEXP _hesim_C_DisModSurv_summary_try(SEXP R_DisModSurvSEXP, SEXP discount_rateSEXP, SEXP xSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_DisModSurv(R_DisModSurvSEXP);
    Rcpp::traits::input_parameter< double >::type discount_rate(discount_rateSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_DisModSurv_summary(R_DisModSurv, discount_rate, x, type));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_C_DisModSurv_summary(SEXP R_DisModSurvSEXP, SEXP discount_rateSEXP, SEXP xSEXP, SEXP typeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_C_DisModSurv_summary_try(R_DisModSurvSEXP, discount_rateSEXP, xSEXP, typeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// C_DecModSurv_effects
arma::mat C_DecModSurv_effects(Rcpp::Environment R_DisModSurv, int t, SEXP state_values, std::vector<double> discount_rate, std::vector<int> type);
static SEXP _hesim_C_DecModSurv_effects_try(SEXP R_DisModSurvSEXP, SEXP tSEXP, SEXP state_valuesSEXP, SEXP discount_rateSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_DisModSurv(R_DisModSurvSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< SEXP >::type state_values(state_valuesSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type discount_rate(discount_rateSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_DecModSurv_effects(R_DisModSurv, t, state_values, discount_rate, type));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_C_DecModSurv_effects(SEXP R_DisModSurvSEXP, SEXP tSEXP, SEXP state_valuesSEXP, SEXP discount_rateSEXP, SEXP typeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_C_DecModSurv_effects_try(R_DisModSurvSEXP, tSEXP, state_valuesSEXP, discount_rateSEXP, typeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// C_DecModSurv_costs
arma::mat C_DecModSurv_costs(Rcpp::Environment R_DisModSurv, std::vector<int> t, SEXP state_values, int n_components, std::vector<double> discount_rate);
static SEXP _hesim_C_DecModSurv_costs_try(SEXP R_DisModSurvSEXP, SEXP tSEXP, SEXP state_valuesSEXP, SEXP n_componentsSEXP, SEXP discount_rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_DisModSurv(R_DisModSurvSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type t(tSEXP);
    Rcpp::traits::input_parameter< SEXP >::type state_values(state_valuesSEXP);
    Rcpp::traits::input_parameter< int >::type n_components(n_componentsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type discount_rate(discount_rateSEXP);
    rcpp_result_gen = Rcpp::wrap(C_DecModSurv_costs(R_DisModSurv, t, state_values, n_components, discount_rate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_C_DecModSurv_costs(SEXP R_DisModSurvSEXP, SEXP tSEXP, SEXP state_valuesSEXP, SEXP n_componentsSEXP, SEXP discount_rateSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_C_DecModSurv_costs_try(R_DisModSurvSEXP, tSEXP, state_valuesSEXP, n_componentsSEXP, discount_rateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// matrix_byrow
arma::mat matrix_byrow(arma::rowvec v, int nrow, int ncol);
RcppExport SEXP _hesim_matrix_byrow(SEXP vSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
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
RcppExport SEXP _hesim_matrix_bycol(SEXP vSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
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
// test_zeroin
double test_zeroin();
RcppExport SEXP _hesim_test_zeroin() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_zeroin());
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _hesim_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("double(*qgompertz)(double,double,double)");
        signatures.insert("double(*rgompertz)(double,double)");
        signatures.insert("double(*qllogis)(double,double,double,int,int)");
        signatures.insert("double(*rllogis)(double,double)");
        signatures.insert("double(*rgengamma)(double,double,double)");
        signatures.insert("std::vector<double>(*C_rgengamma_vec)(int,std::vector<double>,std::vector<double>,std::vector<double>)");
        signatures.insert("double(*rtruncnorm)(double,double,double,double)");
        signatures.insert("double(*rpwexp)(arma::rowvec,arma::rowvec)");
        signatures.insert("std::vector<double>(*C_rpwexp_vec)(int,arma::mat,arma::rowvec)");
        signatures.insert("int(*rcat)(arma::rowvec)");
        signatures.insert("arma::vec(*C_rcat_vec)(int,arma::mat)");
        signatures.insert("arma::rowvec(*rdirichlet)(arma::rowvec)");
        signatures.insert("arma::cube(*C_rdirichlet_mat)(int,arma::mat)");
        signatures.insert("arma::mat(*C_DisModSurv_summary)(Rcpp::Environment,double,std::vector<double>,std::string)");
        signatures.insert("arma::mat(*C_DecModSurv_effects)(Rcpp::Environment,int,SEXP,std::vector<double>,std::vector<int>)");
        signatures.insert("arma::mat(*C_DecModSurv_costs)(Rcpp::Environment,std::vector<int>,SEXP,int,std::vector<double>)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _hesim_RcppExport_registerCCallable() { 
    R_RegisterCCallable("hesim", "_hesim_qgompertz", (DL_FUNC)_hesim_qgompertz_try);
    R_RegisterCCallable("hesim", "_hesim_rgompertz", (DL_FUNC)_hesim_rgompertz_try);
    R_RegisterCCallable("hesim", "_hesim_qllogis", (DL_FUNC)_hesim_qllogis_try);
    R_RegisterCCallable("hesim", "_hesim_rllogis", (DL_FUNC)_hesim_rllogis_try);
    R_RegisterCCallable("hesim", "_hesim_rgengamma", (DL_FUNC)_hesim_rgengamma_try);
    R_RegisterCCallable("hesim", "_hesim_C_rgengamma_vec", (DL_FUNC)_hesim_rgengamma_vec_try);
    R_RegisterCCallable("hesim", "_hesim_rtruncnorm", (DL_FUNC)_hesim_rtruncnorm_try);
    R_RegisterCCallable("hesim", "_hesim_rpwexp", (DL_FUNC)_hesim_rpwexp_try);
    R_RegisterCCallable("hesim", "_hesim_C_rpwexp_vec", (DL_FUNC)_hesim_rpwexp_vec_try);
    R_RegisterCCallable("hesim", "_hesim_rcat", (DL_FUNC)_hesim_rcat_try);
    R_RegisterCCallable("hesim", "_hesim_C_rcat_vec", (DL_FUNC)_hesim_rcat_vec_try);
    R_RegisterCCallable("hesim", "_hesim_rdirichlet", (DL_FUNC)_hesim_rdirichlet_try);
    R_RegisterCCallable("hesim", "_hesim_C_rdirichlet_mat", (DL_FUNC)_hesim_rdirichlet_mat_try);
    R_RegisterCCallable("hesim", "_hesim_C_DisModSurv_summary", (DL_FUNC)_hesim_C_DisModSurv_summary_try);
    R_RegisterCCallable("hesim", "_hesim_C_DecModSurv_effects", (DL_FUNC)_hesim_C_DecModSurv_effects_try);
    R_RegisterCCallable("hesim", "_hesim_C_DecModSurv_costs", (DL_FUNC)_hesim_C_DecModSurv_costs_try);
    R_RegisterCCallable("hesim", "_hesim_RcppExport_validate", (DL_FUNC)_hesim_RcppExport_validate);
    return R_NilValue;
}

RcppExport SEXP _rcpp_module_boot_Distributions();

static const R_CallMethodDef CallEntries[] = {
    {"_hesim_vecmax_index", (DL_FUNC) &_hesim_vecmax_index, 1},
    {"_hesim_vecmax", (DL_FUNC) &_hesim_vecmax, 1},
    {"_hesim_rowmaxC", (DL_FUNC) &_hesim_rowmaxC, 1},
    {"_hesim_stdmean", (DL_FUNC) &_hesim_stdmean, 1},
    {"_hesim_rowmax_indC", (DL_FUNC) &_hesim_rowmax_indC, 1},
    {"_hesim_incr_effectC", (DL_FUNC) &_hesim_incr_effectC, 5},
    {"_hesim_ceacC", (DL_FUNC) &_hesim_ceacC, 6},
    {"_hesim_mceC", (DL_FUNC) &_hesim_mceC, 6},
    {"_hesim_VstarC", (DL_FUNC) &_hesim_VstarC, 6},
    {"_hesim_qgompertz", (DL_FUNC) &_hesim_qgompertz, 3},
    {"_hesim_rgompertz", (DL_FUNC) &_hesim_rgompertz, 2},
    {"_hesim_qllogis", (DL_FUNC) &_hesim_qllogis, 5},
    {"_hesim_rllogis", (DL_FUNC) &_hesim_rllogis, 2},
    {"_hesim_rgengamma", (DL_FUNC) &_hesim_rgengamma, 3},
    {"_hesim_rgengamma_vec", (DL_FUNC) &_hesim_rgengamma_vec, 4},
    {"_hesim_rtruncnorm", (DL_FUNC) &_hesim_rtruncnorm, 4},
    {"_hesim_rpwexp", (DL_FUNC) &_hesim_rpwexp, 2},
    {"_hesim_rpwexp_vec", (DL_FUNC) &_hesim_rpwexp_vec, 3},
    {"_hesim_rcat", (DL_FUNC) &_hesim_rcat, 1},
    {"_hesim_rcat_vec", (DL_FUNC) &_hesim_rcat_vec, 2},
    {"_hesim_rdirichlet", (DL_FUNC) &_hesim_rdirichlet, 1},
    {"_hesim_rdirichlet_mat", (DL_FUNC) &_hesim_rdirichlet_mat, 2},
    {"_hesim_C_DisModSurv_summary", (DL_FUNC) &_hesim_C_DisModSurv_summary, 4},
    {"_hesim_C_DecModSurv_effects", (DL_FUNC) &_hesim_C_DecModSurv_effects, 5},
    {"_hesim_C_DecModSurv_costs", (DL_FUNC) &_hesim_C_DecModSurv_costs, 5},
    {"_hesim_matrix_byrow", (DL_FUNC) &_hesim_matrix_byrow, 3},
    {"_hesim_matrix_bycol", (DL_FUNC) &_hesim_matrix_bycol, 3},
    {"_hesim_test_zeroin", (DL_FUNC) &_hesim_test_zeroin, 0},
    {"_rcpp_module_boot_Distributions", (DL_FUNC) &_rcpp_module_boot_Distributions, 0},
    {"_hesim_RcppExport_registerCCallable", (DL_FUNC) &_hesim_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_hesim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
