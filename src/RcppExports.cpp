// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// C_dalponte2016
IntegerMatrix C_dalponte2016(NumericMatrix Image, IntegerMatrix Seeds, double th_seed, double th_crown, double th_tree, double DIST);
RcppExport SEXP _lidR_C_dalponte2016(SEXP ImageSEXP, SEXP SeedsSEXP, SEXP th_seedSEXP, SEXP th_crownSEXP, SEXP th_treeSEXP, SEXP DISTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Image(ImageSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type Seeds(SeedsSEXP);
    Rcpp::traits::input_parameter< double >::type th_seed(th_seedSEXP);
    Rcpp::traits::input_parameter< double >::type th_crown(th_crownSEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type DIST(DISTSEXP);
    rcpp_result_gen = Rcpp::wrap(C_dalponte2016(Image, Seeds, th_seed, th_crown, th_tree, DIST));
    return rcpp_result_gen;
END_RCPP
}
// C_delaunay
IntegerMatrix C_delaunay(DataFrame P, NumericVector scales, NumericVector offsets, double trim);
RcppExport SEXP _lidR_C_delaunay(SEXP PSEXP, SEXP scalesSEXP, SEXP offsetsSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DataFrame >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< double >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(C_delaunay(P, scales, offsets, trim));
    return rcpp_result_gen;
END_RCPP
}
// C_interpolate_delaunay
NumericVector C_interpolate_delaunay(DataFrame P, DataFrame L, NumericVector scales, NumericVector offsets, double trim, int ncpu);
RcppExport SEXP _lidR_C_interpolate_delaunay(SEXP PSEXP, SEXP LSEXP, SEXP scalesSEXP, SEXP offsetsSEXP, SEXP trimSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DataFrame >::type P(PSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type L(LSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< double >::type trim(trimSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_interpolate_delaunay(P, L, scales, offsets, trim, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_tinfo
NumericMatrix C_tinfo(IntegerMatrix D, NumericMatrix P);
RcppExport SEXP _lidR_C_tinfo(SEXP DSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tinfo(D, P));
    return rcpp_result_gen;
END_RCPP
}
// C_tsearch
IntegerVector C_tsearch(IntegerMatrix D, NumericMatrix P, NumericMatrix X, int ncpu);
RcppExport SEXP _lidR_C_tsearch(SEXP DSEXP, SEXP PSEXP, SEXP XSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tsearch(D, P, X, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_lmf
LogicalVector C_lmf(S4 las, NumericVector ws, double min_height, bool circular, int ncpu);
RcppExport SEXP _lidR_C_lmf(SEXP lasSEXP, SEXP wsSEXP, SEXP min_heightSEXP, SEXP circularSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< double >::type min_height(min_heightSEXP);
    Rcpp::traits::input_parameter< bool >::type circular(circularSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lmf(las, ws, min_height, circular, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_smooth
NumericVector C_smooth(S4 las, double size, int method, int shape, double sigma, int ncpu);
RcppExport SEXP _lidR_C_smooth(SEXP lasSEXP, SEXP sizeSEXP, SEXP methodSEXP, SEXP shapeSEXP, SEXP sigmaSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_smooth(las, size, method, shape, sigma, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_highest
LogicalVector C_highest(S4 las, S4 layout);
RcppExport SEXP _lidR_C_highest(SEXP lasSEXP, SEXP layoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< S4 >::type layout(layoutSEXP);
    rcpp_result_gen = Rcpp::wrap(C_highest(las, layout));
    return rcpp_result_gen;
END_RCPP
}
// C_in_polygon
LogicalVector C_in_polygon(S4 las, std::string wkt, int ncpu);
RcppExport SEXP _lidR_C_in_polygon(SEXP lasSEXP, SEXP wktSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< std::string >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_in_polygon(las, wkt, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_lasdetectshape
LogicalVector C_lasdetectshape(S4 las, int method, NumericVector th, int k, LogicalVector filter, int ncpu);
RcppExport SEXP _lidR_C_lasdetectshape(SEXP lasSEXP, SEXP methodSEXP, SEXP thSEXP, SEXP kSEXP, SEXP filterSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type th(thSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lasdetectshape(las, method, th, k, filter, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_Wing2015
IntegerVector C_Wing2015(S4 las, NumericVector neigh_radii, double low_int_thrsh, double uppr_int_thrsh, int pt_den_req, NumericMatrix BBPRthrsh_mat, int ncpu);
RcppExport SEXP _lidR_C_Wing2015(SEXP lasSEXP, SEXP neigh_radiiSEXP, SEXP low_int_thrshSEXP, SEXP uppr_int_thrshSEXP, SEXP pt_den_reqSEXP, SEXP BBPRthrsh_matSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type neigh_radii(neigh_radiiSEXP);
    Rcpp::traits::input_parameter< double >::type low_int_thrsh(low_int_thrshSEXP);
    Rcpp::traits::input_parameter< double >::type uppr_int_thrsh(uppr_int_thrshSEXP);
    Rcpp::traits::input_parameter< int >::type pt_den_req(pt_den_reqSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type BBPRthrsh_mat(BBPRthrsh_matSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Wing2015(las, neigh_radii, low_int_thrsh, uppr_int_thrsh, pt_den_req, BBPRthrsh_mat, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_li2012
IntegerVector C_li2012(S4 las, double dt1, double dt2, double Zu, double R, double th_tree, double radius);
RcppExport SEXP _lidR_C_li2012(SEXP lasSEXP, SEXP dt1SEXP, SEXP dt2SEXP, SEXP ZuSEXP, SEXP RSEXP, SEXP th_treeSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type dt1(dt1SEXP);
    Rcpp::traits::input_parameter< double >::type dt2(dt2SEXP);
    Rcpp::traits::input_parameter< double >::type Zu(ZuSEXP);
    Rcpp::traits::input_parameter< double >::type R(RSEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(C_li2012(las, dt1, dt2, Zu, R, th_tree, radius));
    return rcpp_result_gen;
END_RCPP
}
// C_pmf
LogicalVector C_pmf(S4 las, NumericVector ws, NumericVector th, LogicalVector filter);
RcppExport SEXP _lidR_C_pmf(SEXP lasSEXP, SEXP wsSEXP, SEXP thSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type th(thSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(C_pmf(las, ws, th, filter));
    return rcpp_result_gen;
END_RCPP
}
// C_rasterize
NumericVector C_rasterize(S4 las, S4 layout, double subcircle, int method);
RcppExport SEXP _lidR_C_rasterize(SEXP lasSEXP, SEXP layoutSEXP, SEXP subcircleSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< S4 >::type layout(layoutSEXP);
    Rcpp::traits::input_parameter< double >::type subcircle(subcircleSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rasterize(las, layout, subcircle, method));
    return rcpp_result_gen;
END_RCPP
}
// C_point_metrics
List C_point_metrics(S4 las, unsigned int k, DataFrame sub, SEXP call, SEXP env, LogicalVector filter);
RcppExport SEXP _lidR_C_point_metrics(SEXP lasSEXP, SEXP kSEXP, SEXP subSEXP, SEXP callSEXP, SEXP envSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type k(kSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type sub(subSEXP);
    Rcpp::traits::input_parameter< SEXP >::type call(callSEXP);
    Rcpp::traits::input_parameter< SEXP >::type env(envSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(C_point_metrics(las, k, sub, call, env, filter));
    return rcpp_result_gen;
END_RCPP
}
// C_lasrangecorrection
IntegerVector C_lasrangecorrection(S4 las, DataFrame flightlines, double Rs, double f);
RcppExport SEXP _lidR_C_lasrangecorrection(SEXP lasSEXP, SEXP flightlinesSEXP, SEXP RsSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type flightlines(flightlinesSEXP);
    Rcpp::traits::input_parameter< double >::type Rs(RsSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lasrangecorrection(las, flightlines, Rs, f));
    return rcpp_result_gen;
END_RCPP
}
// C_check_gpstime
int C_check_gpstime(NumericVector t, IntegerVector rn);
RcppExport SEXP _lidR_C_check_gpstime(SEXP tSEXP, SEXP rnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rn(rnSEXP);
    rcpp_result_gen = Rcpp::wrap(C_check_gpstime(t, rn));
    return rcpp_result_gen;
END_RCPP
}
// fast_table
IntegerVector fast_table(IntegerVector x, int size);
RcppExport SEXP _lidR_fast_table(SEXP xSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_table(x, size));
    return rcpp_result_gen;
END_RCPP
}
// fast_countequal
int fast_countequal(IntegerVector x, int t);
RcppExport SEXP _lidR_fast_countequal(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countequal(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countbelow
int fast_countbelow(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countbelow(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countbelow(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countover
int fast_countover(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countover(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countover(x, t));
    return rcpp_result_gen;
END_RCPP
}
// roundc
NumericVector roundc(NumericVector x, int digit);
RcppExport SEXP _lidR_roundc(SEXP xSEXP, SEXP digitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type digit(digitSEXP);
    rcpp_result_gen = Rcpp::wrap(roundc(x, digit));
    return rcpp_result_gen;
END_RCPP
}
// fast_eigen_values
SEXP fast_eigen_values(arma::mat A);
RcppExport SEXP _lidR_fast_eigen_values(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fast_eigen_values(A));
    return rcpp_result_gen;
END_RCPP
}
// C_knn
Rcpp::List C_knn(NumericVector X, NumericVector Y, NumericVector x, NumericVector y, int k, int ncpu);
RcppExport SEXP _lidR_C_knn(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn(X, Y, x, y, k, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_knnidw
NumericVector C_knnidw(NumericVector X, NumericVector Y, NumericVector Z, NumericVector x, NumericVector y, int k, double p, int ncpu);
RcppExport SEXP _lidR_C_knnidw(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP pSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knnidw(X, Y, Z, x, y, k, p, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_count_in_disc
IntegerVector C_count_in_disc(NumericVector X, NumericVector Y, NumericVector x, NumericVector y, double radius, int ncpu);
RcppExport SEXP _lidR_C_count_in_disc(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP radiusSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_count_in_disc(X, Y, x, y, radius, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_circle_lookup
IntegerVector C_circle_lookup(NumericVector X, NumericVector Y, double x, double y, double r);
RcppExport SEXP _lidR_C_circle_lookup(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(C_circle_lookup(X, Y, x, y, r));
    return rcpp_result_gen;
END_RCPP
}
// C_knn3d_lookup
IntegerVector C_knn3d_lookup(NumericVector X, NumericVector Y, NumericVector Z, double x, double y, double z, int k);
RcppExport SEXP _lidR_C_knn3d_lookup(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn3d_lookup(X, Y, Z, x, y, z, k));
    return rcpp_result_gen;
END_RCPP
}
// R_omp_get_max_threads
int R_omp_get_max_threads();
RcppExport SEXP _lidR_R_omp_get_max_threads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(R_omp_get_max_threads());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lidR_C_dalponte2016", (DL_FUNC) &_lidR_C_dalponte2016, 6},
    {"_lidR_C_delaunay", (DL_FUNC) &_lidR_C_delaunay, 4},
    {"_lidR_C_interpolate_delaunay", (DL_FUNC) &_lidR_C_interpolate_delaunay, 6},
    {"_lidR_C_tinfo", (DL_FUNC) &_lidR_C_tinfo, 2},
    {"_lidR_C_tsearch", (DL_FUNC) &_lidR_C_tsearch, 4},
    {"_lidR_C_lmf", (DL_FUNC) &_lidR_C_lmf, 5},
    {"_lidR_C_smooth", (DL_FUNC) &_lidR_C_smooth, 6},
    {"_lidR_C_highest", (DL_FUNC) &_lidR_C_highest, 2},
    {"_lidR_C_in_polygon", (DL_FUNC) &_lidR_C_in_polygon, 3},
    {"_lidR_C_lasdetectshape", (DL_FUNC) &_lidR_C_lasdetectshape, 6},
    {"_lidR_C_Wing2015", (DL_FUNC) &_lidR_C_Wing2015, 7},
    {"_lidR_C_li2012", (DL_FUNC) &_lidR_C_li2012, 7},
    {"_lidR_C_pmf", (DL_FUNC) &_lidR_C_pmf, 4},
    {"_lidR_C_rasterize", (DL_FUNC) &_lidR_C_rasterize, 4},
    {"_lidR_C_point_metrics", (DL_FUNC) &_lidR_C_point_metrics, 6},
    {"_lidR_C_lasrangecorrection", (DL_FUNC) &_lidR_C_lasrangecorrection, 4},
    {"_lidR_C_check_gpstime", (DL_FUNC) &_lidR_C_check_gpstime, 2},
    {"_lidR_fast_table", (DL_FUNC) &_lidR_fast_table, 2},
    {"_lidR_fast_countequal", (DL_FUNC) &_lidR_fast_countequal, 2},
    {"_lidR_fast_countbelow", (DL_FUNC) &_lidR_fast_countbelow, 2},
    {"_lidR_fast_countover", (DL_FUNC) &_lidR_fast_countover, 2},
    {"_lidR_roundc", (DL_FUNC) &_lidR_roundc, 2},
    {"_lidR_fast_eigen_values", (DL_FUNC) &_lidR_fast_eigen_values, 1},
    {"_lidR_C_knn", (DL_FUNC) &_lidR_C_knn, 6},
    {"_lidR_C_knnidw", (DL_FUNC) &_lidR_C_knnidw, 8},
    {"_lidR_C_count_in_disc", (DL_FUNC) &_lidR_C_count_in_disc, 6},
    {"_lidR_C_circle_lookup", (DL_FUNC) &_lidR_C_circle_lookup, 5},
    {"_lidR_C_knn3d_lookup", (DL_FUNC) &_lidR_C_knn3d_lookup, 7},
    {"_lidR_R_omp_get_max_threads", (DL_FUNC) &_lidR_R_omp_get_max_threads, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_lidR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
