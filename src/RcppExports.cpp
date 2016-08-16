// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getAverage
double getAverage(NumericMatrix img, int u, int v, int n);
RcppExport SEXP ragram_getAverage(SEXP imgSEXP, SEXP uSEXP, SEXP vSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type img(imgSEXP);
    Rcpp::traits::input_parameter< int >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(getAverage(img, u, v, n));
    return __result;
END_RCPP
}
// getStandardDeviation
double getStandardDeviation(NumericMatrix img, int u, int v, int n);
RcppExport SEXP ragram_getStandardDeviation(SEXP imgSEXP, SEXP uSEXP, SEXP vSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type img(imgSEXP);
    Rcpp::traits::input_parameter< int >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(getStandardDeviation(img, u, v, n));
    return __result;
END_RCPP
}
// znccCpp
double znccCpp(NumericMatrix master, NumericMatrix slave, int u1, int v1, int u2, int v2, int n);
RcppExport SEXP ragram_znccCpp(SEXP masterSEXP, SEXP slaveSEXP, SEXP u1SEXP, SEXP v1SEXP, SEXP u2SEXP, SEXP v2SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type master(masterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type slave(slaveSEXP);
    Rcpp::traits::input_parameter< int >::type u1(u1SEXP);
    Rcpp::traits::input_parameter< int >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< int >::type u2(u2SEXP);
    Rcpp::traits::input_parameter< int >::type v2(v2SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(znccCpp(master, slave, u1, v1, u2, v2, n));
    return __result;
END_RCPP
}
// znccPyramidal
double znccPyramidal(NumericMatrix master, NumericMatrix slave, int u1, int v1, int u2, int v2, NumericVector n);
RcppExport SEXP ragram_znccPyramidal(SEXP masterSEXP, SEXP slaveSEXP, SEXP u1SEXP, SEXP v1SEXP, SEXP u2SEXP, SEXP v2SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type master(masterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type slave(slaveSEXP);
    Rcpp::traits::input_parameter< int >::type u1(u1SEXP);
    Rcpp::traits::input_parameter< int >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< int >::type u2(u2SEXP);
    Rcpp::traits::input_parameter< int >::type v2(v2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    __result = Rcpp::wrap(znccPyramidal(master, slave, u1, v1, u2, v2, n));
    return __result;
END_RCPP
}
// getZnccsInSearchArea
NumericMatrix getZnccsInSearchArea(NumericMatrix master, NumericMatrix slave, NumericVector index, int u, int v, int n, NumericVector searchAreaShift);
RcppExport SEXP ragram_getZnccsInSearchArea(SEXP masterSEXP, SEXP slaveSEXP, SEXP indexSEXP, SEXP uSEXP, SEXP vSEXP, SEXP nSEXP, SEXP searchAreaShiftSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type master(masterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type slave(slaveSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type searchAreaShift(searchAreaShiftSEXP);
    __result = Rcpp::wrap(getZnccsInSearchArea(master, slave, index, u, v, n, searchAreaShift));
    return __result;
END_RCPP
}
// getPyramidalZnccsInSearchArea
NumericMatrix getPyramidalZnccsInSearchArea(NumericMatrix master, NumericMatrix slave, NumericVector index, int u, int v, NumericVector n, NumericVector searchAreaShift);
RcppExport SEXP ragram_getPyramidalZnccsInSearchArea(SEXP masterSEXP, SEXP slaveSEXP, SEXP indexSEXP, SEXP uSEXP, SEXP vSEXP, SEXP nSEXP, SEXP searchAreaShiftSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type master(masterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type slave(slaveSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type searchAreaShift(searchAreaShiftSEXP);
    __result = Rcpp::wrap(getPyramidalZnccsInSearchArea(master, slave, index, u, v, n, searchAreaShift));
    return __result;
END_RCPP
}
