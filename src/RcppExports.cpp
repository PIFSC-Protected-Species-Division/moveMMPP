// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// phi_exp_lnG
arma::mat phi_exp_lnG(const arma::mat& phi, const arma::sp_mat& lnG, const double& prec);
RcppExport SEXP _moveMMPP_phi_exp_lnG(SEXP phiSEXP, SEXP lnGSEXP, SEXP precSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type lnG(lnGSEXP);
    Rcpp::traits::input_parameter< const double& >::type prec(precSEXP);
    rcpp_result_gen = Rcpp::wrap(phi_exp_lnG(phi, lnG, prec));
    return rcpp_result_gen;
END_RCPP
}
// logit
arma::vec logit(const arma::vec& x, const double& L, const double& U);
RcppExport SEXP _moveMMPP_logit(SEXP xSEXP, SEXP LSEXP, SEXP USEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const double& >::type U(USEXP);
    rcpp_result_gen = Rcpp::wrap(logit(x, L, U));
    return rcpp_result_gen;
END_RCPP
}
// soft_plus
arma::vec soft_plus(const arma::vec& x, const double& a);
RcppExport SEXP _moveMMPP_soft_plus(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(soft_plus(x, a));
    return rcpp_result_gen;
END_RCPP
}
// load_Q_mult
arma::sp_mat load_Q_mult(const arma::umat& from_to, const arma::vec& Xb_q_r, const arma::vec& Xb_q_m, const int& ns, const int& link_r, const int& link_m, const double& a_r, const double& a_m, const bool& norm);
RcppExport SEXP _moveMMPP_load_Q_mult(SEXP from_toSEXP, SEXP Xb_q_rSEXP, SEXP Xb_q_mSEXP, SEXP nsSEXP, SEXP link_rSEXP, SEXP link_mSEXP, SEXP a_rSEXP, SEXP a_mSEXP, SEXP normSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::umat& >::type from_to(from_toSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_q_r(Xb_q_rSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_q_m(Xb_q_mSEXP);
    Rcpp::traits::input_parameter< const int& >::type ns(nsSEXP);
    Rcpp::traits::input_parameter< const int& >::type link_r(link_rSEXP);
    Rcpp::traits::input_parameter< const int& >::type link_m(link_mSEXP);
    Rcpp::traits::input_parameter< const double& >::type a_r(a_rSEXP);
    Rcpp::traits::input_parameter< const double& >::type a_m(a_mSEXP);
    Rcpp::traits::input_parameter< const bool& >::type norm(normSEXP);
    rcpp_result_gen = Rcpp::wrap(load_Q_mult(from_to, Xb_q_r, Xb_q_m, ns, link_r, link_m, a_r, a_m, norm));
    return rcpp_result_gen;
END_RCPP
}
// load_Q_add
arma::sp_mat load_Q_add(const arma::umat& from_to, const arma::vec& Xb_q_r, const arma::vec& Xb_q_m, const int& ns, const int& link_r, const int& link_m, const double& a_r, const double& a_m);
RcppExport SEXP _moveMMPP_load_Q_add(SEXP from_toSEXP, SEXP Xb_q_rSEXP, SEXP Xb_q_mSEXP, SEXP nsSEXP, SEXP link_rSEXP, SEXP link_mSEXP, SEXP a_rSEXP, SEXP a_mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::umat& >::type from_to(from_toSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_q_r(Xb_q_rSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_q_m(Xb_q_mSEXP);
    Rcpp::traits::input_parameter< const int& >::type ns(nsSEXP);
    Rcpp::traits::input_parameter< const int& >::type link_r(link_rSEXP);
    Rcpp::traits::input_parameter< const int& >::type link_m(link_mSEXP);
    Rcpp::traits::input_parameter< const double& >::type a_r(a_rSEXP);
    Rcpp::traits::input_parameter< const double& >::type a_m(a_mSEXP);
    rcpp_result_gen = Rcpp::wrap(load_Q_add(from_to, Xb_q_r, Xb_q_m, ns, link_r, link_m, a_r, a_m));
    return rcpp_result_gen;
END_RCPP
}
// load_L
arma::mat load_L(const arma::vec& period_l, const arma::vec& cell_l, const arma::vec& fix_l, const arma::vec& Xb_l, const int& ns, const int& np);
RcppExport SEXP _moveMMPP_load_L(SEXP period_lSEXP, SEXP cell_lSEXP, SEXP fix_lSEXP, SEXP Xb_lSEXP, SEXP nsSEXP, SEXP npSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type period_l(period_lSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cell_l(cell_lSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fix_l(fix_lSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_l(Xb_lSEXP);
    Rcpp::traits::input_parameter< const int& >::type ns(nsSEXP);
    Rcpp::traits::input_parameter< const int& >::type np(npSEXP);
    rcpp_result_gen = Rcpp::wrap(load_L(period_l, cell_l, fix_l, Xb_l, ns, np));
    return rcpp_result_gen;
END_RCPP
}
// mmpp_arma
Rcpp::List mmpp_arma(const arma::vec& id, const arma::vec& period, const arma::vec& dt, const arma::vec& cell, const int& ns, const int& np, const arma::vec& Xb_l, const arma::vec& fix_l, const arma::vec& period_l, const arma::vec& cell_l, const arma::umat& from_to, const arma::vec& Xb_q_r, const arma::vec& Xb_q_m, const double& eq_prec, const int& link_r, const int& link_m, const int& struc, const double& a_r, const double& a_m, const double& k, const bool& norm);
RcppExport SEXP _moveMMPP_mmpp_arma(SEXP idSEXP, SEXP periodSEXP, SEXP dtSEXP, SEXP cellSEXP, SEXP nsSEXP, SEXP npSEXP, SEXP Xb_lSEXP, SEXP fix_lSEXP, SEXP period_lSEXP, SEXP cell_lSEXP, SEXP from_toSEXP, SEXP Xb_q_rSEXP, SEXP Xb_q_mSEXP, SEXP eq_precSEXP, SEXP link_rSEXP, SEXP link_mSEXP, SEXP strucSEXP, SEXP a_rSEXP, SEXP a_mSEXP, SEXP kSEXP, SEXP normSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type id(idSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type period(periodSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cell(cellSEXP);
    Rcpp::traits::input_parameter< const int& >::type ns(nsSEXP);
    Rcpp::traits::input_parameter< const int& >::type np(npSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_l(Xb_lSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fix_l(fix_lSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type period_l(period_lSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cell_l(cell_lSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type from_to(from_toSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_q_r(Xb_q_rSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb_q_m(Xb_q_mSEXP);
    Rcpp::traits::input_parameter< const double& >::type eq_prec(eq_precSEXP);
    Rcpp::traits::input_parameter< const int& >::type link_r(link_rSEXP);
    Rcpp::traits::input_parameter< const int& >::type link_m(link_mSEXP);
    Rcpp::traits::input_parameter< const int& >::type struc(strucSEXP);
    Rcpp::traits::input_parameter< const double& >::type a_r(a_rSEXP);
    Rcpp::traits::input_parameter< const double& >::type a_m(a_mSEXP);
    Rcpp::traits::input_parameter< const double& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const bool& >::type norm(normSEXP);
    rcpp_result_gen = Rcpp::wrap(mmpp_arma(id, period, dt, cell, ns, np, Xb_l, fix_l, period_l, cell_l, from_to, Xb_q_r, Xb_q_m, eq_prec, link_r, link_m, struc, a_r, a_m, k, norm));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_moveMMPP_phi_exp_lnG", (DL_FUNC) &_moveMMPP_phi_exp_lnG, 3},
    {"_moveMMPP_logit", (DL_FUNC) &_moveMMPP_logit, 3},
    {"_moveMMPP_soft_plus", (DL_FUNC) &_moveMMPP_soft_plus, 2},
    {"_moveMMPP_load_Q_mult", (DL_FUNC) &_moveMMPP_load_Q_mult, 9},
    {"_moveMMPP_load_Q_add", (DL_FUNC) &_moveMMPP_load_Q_add, 8},
    {"_moveMMPP_load_L", (DL_FUNC) &_moveMMPP_load_L, 6},
    {"_moveMMPP_mmpp_arma", (DL_FUNC) &_moveMMPP_mmpp_arma, 21},
    {NULL, NULL, 0}
};

RcppExport void R_init_moveMMPP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
