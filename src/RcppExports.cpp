// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cmd
double cmd(NumericMatrix x, NumericMatrix y);
RcppExport SEXP MESS_cmd(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    __result = Rcpp::wrap(cmd(x, y));
    return __result;
END_RCPP
}
// filldown
SEXP filldown(SEXP x);
RcppExport SEXP MESS_filldown(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(filldown(x));
    return __result;
END_RCPP
}
// lmm_Maximize_cpp
List lmm_Maximize_cpp(NumericVector y, NumericMatrix x, List vc, int maxiter, bool REML, double tolerance, bool reparam, bool scale, bool addresidual, bool ReturnEstimatedVariance);
RcppExport SEXP MESS_lmm_Maximize_cpp(SEXP ySEXP, SEXP xSEXP, SEXP vcSEXP, SEXP maxiterSEXP, SEXP REMLSEXP, SEXP toleranceSEXP, SEXP reparamSEXP, SEXP scaleSEXP, SEXP addresidualSEXP, SEXP ReturnEstimatedVarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type vc(vcSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type REML(REMLSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< bool >::type reparam(reparamSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type addresidual(addresidualSEXP);
    Rcpp::traits::input_parameter< bool >::type ReturnEstimatedVariance(ReturnEstimatedVarianceSEXP);
    __result = Rcpp::wrap(lmm_Maximize_cpp(y, x, vc, maxiter, REML, tolerance, reparam, scale, addresidual, ReturnEstimatedVariance));
    return __result;
END_RCPP
}
// mrbind
NumericMatrix mrbind(NumericMatrix m1, NumericMatrix m2);
RcppExport SEXP MESS_mrbind(SEXP m1SEXP, SEXP m2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m2(m2SEXP);
    __result = Rcpp::wrap(mrbind(m1, m2));
    return __result;
END_RCPP
}
// mfastLm_cpp
DataFrame mfastLm_cpp(NumericVector y, NumericMatrix x, int addintercept);
RcppExport SEXP MESS_mfastLm_cpp(SEXP ySEXP, SEXP xSEXP, SEXP addinterceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type addintercept(addinterceptSEXP);
    __result = Rcpp::wrap(mfastLm_cpp(y, x, addintercept));
    return __result;
END_RCPP
}
// page
NumericVector page(DatetimeVector from, DatetimeVector to);
RcppExport SEXP MESS_page(SEXP fromSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DatetimeVector >::type from(fromSEXP);
    Rcpp::traits::input_parameter< DatetimeVector >::type to(toSEXP);
    __result = Rcpp::wrap(page(from, to));
    return __result;
END_RCPP
}
// qdiag
NumericVector qdiag(NumericMatrix x);
RcppExport SEXP MESS_qdiag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(qdiag(x));
    return __result;
END_RCPP
}
// quadform
NumericMatrix quadform(NumericMatrix x, NumericMatrix M, bool invertM, bool transposex);
RcppExport SEXP MESS_quadform(SEXP xSEXP, SEXP MSEXP, SEXP invertMSEXP, SEXP transposexSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type invertM(invertMSEXP);
    Rcpp::traits::input_parameter< bool >::type transposex(transposexSEXP);
    __result = Rcpp::wrap(quadform(x, M, invertM, transposex));
    return __result;
END_RCPP
}
// repmat
NumericMatrix repmat(NumericMatrix x, int nrow, int ncol);
RcppExport SEXP MESS_repmat(SEXP xSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    __result = Rcpp::wrap(repmat(x, nrow, ncol));
    return __result;
END_RCPP
}
// tracemp
double tracemp(NumericMatrix A, NumericMatrix B);
RcppExport SEXP MESS_tracemp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    __result = Rcpp::wrap(tracemp(A, B));
    return __result;
END_RCPP
}
