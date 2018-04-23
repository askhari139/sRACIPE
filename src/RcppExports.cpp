// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// interaction_reader
IntegerMatrix interaction_reader(IntegerMatrix gene_interaction, String filepath, String filename, int number_gene);
RcppExport SEXP _sRACIPEv03_interaction_reader(SEXP gene_interactionSEXP, SEXP filepathSEXP, SEXP filenameSEXP, SEXP number_geneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type gene_interaction(gene_interactionSEXP);
    Rcpp::traits::input_parameter< String >::type filepath(filepathSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type number_gene(number_geneSEXP);
    rcpp_result_gen = Rcpp::wrap(interaction_reader(gene_interaction, filepath, filename, number_gene));
    return rcpp_result_gen;
END_RCPP
}
// multiGeneCircuit_EM_uniform_Darray_annealing
int multiGeneCircuit_EM_uniform_Darray_annealing(IntegerMatrix gene_interaction, NumericVector threshold_gene, double g_min, double g_max, double k_min, double k_max, int possible_interactions, long model_count_max, long threshold_max, double h, double lambda_min, double lambda_max, int n_min, int n_max, double tot_time, double median_range, double standard_deviation_factor, int number_gene, double D_max, double D_shot_scaling, int GENE_NOISE_SCALING, int file_writing_interval, int D_levels, double D_scaling, int output_precision, int ANNEALING, int CONSTANT_NOISE, int INITIAL_CONDITIONS, String filename);
RcppExport SEXP _sRACIPEv03_multiGeneCircuit_EM_uniform_Darray_annealing(SEXP gene_interactionSEXP, SEXP threshold_geneSEXP, SEXP g_minSEXP, SEXP g_maxSEXP, SEXP k_minSEXP, SEXP k_maxSEXP, SEXP possible_interactionsSEXP, SEXP model_count_maxSEXP, SEXP threshold_maxSEXP, SEXP hSEXP, SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP n_minSEXP, SEXP n_maxSEXP, SEXP tot_timeSEXP, SEXP median_rangeSEXP, SEXP standard_deviation_factorSEXP, SEXP number_geneSEXP, SEXP D_maxSEXP, SEXP D_shot_scalingSEXP, SEXP GENE_NOISE_SCALINGSEXP, SEXP file_writing_intervalSEXP, SEXP D_levelsSEXP, SEXP D_scalingSEXP, SEXP output_precisionSEXP, SEXP ANNEALINGSEXP, SEXP CONSTANT_NOISESEXP, SEXP INITIAL_CONDITIONSSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type gene_interaction(gene_interactionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold_gene(threshold_geneSEXP);
    Rcpp::traits::input_parameter< double >::type g_min(g_minSEXP);
    Rcpp::traits::input_parameter< double >::type g_max(g_maxSEXP);
    Rcpp::traits::input_parameter< double >::type k_min(k_minSEXP);
    Rcpp::traits::input_parameter< double >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< int >::type possible_interactions(possible_interactionsSEXP);
    Rcpp::traits::input_parameter< long >::type model_count_max(model_count_maxSEXP);
    Rcpp::traits::input_parameter< long >::type threshold_max(threshold_maxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< double >::type tot_time(tot_timeSEXP);
    Rcpp::traits::input_parameter< double >::type median_range(median_rangeSEXP);
    Rcpp::traits::input_parameter< double >::type standard_deviation_factor(standard_deviation_factorSEXP);
    Rcpp::traits::input_parameter< int >::type number_gene(number_geneSEXP);
    Rcpp::traits::input_parameter< double >::type D_max(D_maxSEXP);
    Rcpp::traits::input_parameter< double >::type D_shot_scaling(D_shot_scalingSEXP);
    Rcpp::traits::input_parameter< int >::type GENE_NOISE_SCALING(GENE_NOISE_SCALINGSEXP);
    Rcpp::traits::input_parameter< int >::type file_writing_interval(file_writing_intervalSEXP);
    Rcpp::traits::input_parameter< int >::type D_levels(D_levelsSEXP);
    Rcpp::traits::input_parameter< double >::type D_scaling(D_scalingSEXP);
    Rcpp::traits::input_parameter< int >::type output_precision(output_precisionSEXP);
    Rcpp::traits::input_parameter< int >::type ANNEALING(ANNEALINGSEXP);
    Rcpp::traits::input_parameter< int >::type CONSTANT_NOISE(CONSTANT_NOISESEXP);
    Rcpp::traits::input_parameter< int >::type INITIAL_CONDITIONS(INITIAL_CONDITIONSSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(multiGeneCircuit_EM_uniform_Darray_annealing(gene_interaction, threshold_gene, g_min, g_max, k_min, k_max, possible_interactions, model_count_max, threshold_max, h, lambda_min, lambda_max, n_min, n_max, tot_time, median_range, standard_deviation_factor, number_gene, D_max, D_shot_scaling, GENE_NOISE_SCALING, file_writing_interval, D_levels, D_scaling, output_precision, ANNEALING, CONSTANT_NOISE, INITIAL_CONDITIONS, filename));
    return rcpp_result_gen;
END_RCPP
}
// multiGeneCircuit_RK_adaptive_deterministic
int multiGeneCircuit_RK_adaptive_deterministic(IntegerMatrix gene_interaction, NumericVector threshold_gene, double g_min, double g_max, double k_min, double k_max, int possible_interactions, long model_count_max, long threshold_max, double h, double lambda_min, double lambda_max, int n_min, int n_max, double tot_time, double median_range, double standard_deviation_factor, int number_gene, int output_precision, int INITIAL_CONDITIONS, double RK_TOLERANCE, String filename);
RcppExport SEXP _sRACIPEv03_multiGeneCircuit_RK_adaptive_deterministic(SEXP gene_interactionSEXP, SEXP threshold_geneSEXP, SEXP g_minSEXP, SEXP g_maxSEXP, SEXP k_minSEXP, SEXP k_maxSEXP, SEXP possible_interactionsSEXP, SEXP model_count_maxSEXP, SEXP threshold_maxSEXP, SEXP hSEXP, SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP n_minSEXP, SEXP n_maxSEXP, SEXP tot_timeSEXP, SEXP median_rangeSEXP, SEXP standard_deviation_factorSEXP, SEXP number_geneSEXP, SEXP output_precisionSEXP, SEXP INITIAL_CONDITIONSSEXP, SEXP RK_TOLERANCESEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type gene_interaction(gene_interactionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold_gene(threshold_geneSEXP);
    Rcpp::traits::input_parameter< double >::type g_min(g_minSEXP);
    Rcpp::traits::input_parameter< double >::type g_max(g_maxSEXP);
    Rcpp::traits::input_parameter< double >::type k_min(k_minSEXP);
    Rcpp::traits::input_parameter< double >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< int >::type possible_interactions(possible_interactionsSEXP);
    Rcpp::traits::input_parameter< long >::type model_count_max(model_count_maxSEXP);
    Rcpp::traits::input_parameter< long >::type threshold_max(threshold_maxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< double >::type tot_time(tot_timeSEXP);
    Rcpp::traits::input_parameter< double >::type median_range(median_rangeSEXP);
    Rcpp::traits::input_parameter< double >::type standard_deviation_factor(standard_deviation_factorSEXP);
    Rcpp::traits::input_parameter< int >::type number_gene(number_geneSEXP);
    Rcpp::traits::input_parameter< int >::type output_precision(output_precisionSEXP);
    Rcpp::traits::input_parameter< int >::type INITIAL_CONDITIONS(INITIAL_CONDITIONSSEXP);
    Rcpp::traits::input_parameter< double >::type RK_TOLERANCE(RK_TOLERANCESEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(multiGeneCircuit_RK_adaptive_deterministic(gene_interaction, threshold_gene, g_min, g_max, k_min, k_max, possible_interactions, model_count_max, threshold_max, h, lambda_min, lambda_max, n_min, n_max, tot_time, median_range, standard_deviation_factor, number_gene, output_precision, INITIAL_CONDITIONS, RK_TOLERANCE, filename));
    return rcpp_result_gen;
END_RCPP
}
// multiGeneCircuit_RK_deterministic
int multiGeneCircuit_RK_deterministic(IntegerMatrix gene_interaction, NumericVector threshold_gene, double g_min, double g_max, double k_min, double k_max, int possible_interactions, long model_count_max, long threshold_max, double h, double lambda_min, double lambda_max, int n_min, int n_max, double tot_time, double median_range, double standard_deviation_factor, int number_gene, int output_precision, int INITIAL_CONDITIONS, String filename);
RcppExport SEXP _sRACIPEv03_multiGeneCircuit_RK_deterministic(SEXP gene_interactionSEXP, SEXP threshold_geneSEXP, SEXP g_minSEXP, SEXP g_maxSEXP, SEXP k_minSEXP, SEXP k_maxSEXP, SEXP possible_interactionsSEXP, SEXP model_count_maxSEXP, SEXP threshold_maxSEXP, SEXP hSEXP, SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP n_minSEXP, SEXP n_maxSEXP, SEXP tot_timeSEXP, SEXP median_rangeSEXP, SEXP standard_deviation_factorSEXP, SEXP number_geneSEXP, SEXP output_precisionSEXP, SEXP INITIAL_CONDITIONSSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type gene_interaction(gene_interactionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold_gene(threshold_geneSEXP);
    Rcpp::traits::input_parameter< double >::type g_min(g_minSEXP);
    Rcpp::traits::input_parameter< double >::type g_max(g_maxSEXP);
    Rcpp::traits::input_parameter< double >::type k_min(k_minSEXP);
    Rcpp::traits::input_parameter< double >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< int >::type possible_interactions(possible_interactionsSEXP);
    Rcpp::traits::input_parameter< long >::type model_count_max(model_count_maxSEXP);
    Rcpp::traits::input_parameter< long >::type threshold_max(threshold_maxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< double >::type tot_time(tot_timeSEXP);
    Rcpp::traits::input_parameter< double >::type median_range(median_rangeSEXP);
    Rcpp::traits::input_parameter< double >::type standard_deviation_factor(standard_deviation_factorSEXP);
    Rcpp::traits::input_parameter< int >::type number_gene(number_geneSEXP);
    Rcpp::traits::input_parameter< int >::type output_precision(output_precisionSEXP);
    Rcpp::traits::input_parameter< int >::type INITIAL_CONDITIONS(INITIAL_CONDITIONSSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(multiGeneCircuit_RK_deterministic(gene_interaction, threshold_gene, g_min, g_max, k_min, k_max, possible_interactions, model_count_max, threshold_max, h, lambda_min, lambda_max, n_min, n_max, tot_time, median_range, standard_deviation_factor, number_gene, output_precision, INITIAL_CONDITIONS, filename));
    return rcpp_result_gen;
END_RCPP
}
// threshold_calculator_uniform
int threshold_calculator_uniform(IntegerMatrix gene_interaction, NumericVector threshold_gene, double g_min, double g_max, double k_min, double k_max, int possible_interactions, long model_count_max, long threshold_max, double h, double lambda_min, double lambda_max, int n_min, int n_max, double median_range, double standard_deviation_factor);
RcppExport SEXP _sRACIPEv03_threshold_calculator_uniform(SEXP gene_interactionSEXP, SEXP threshold_geneSEXP, SEXP g_minSEXP, SEXP g_maxSEXP, SEXP k_minSEXP, SEXP k_maxSEXP, SEXP possible_interactionsSEXP, SEXP model_count_maxSEXP, SEXP threshold_maxSEXP, SEXP hSEXP, SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP n_minSEXP, SEXP n_maxSEXP, SEXP median_rangeSEXP, SEXP standard_deviation_factorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type gene_interaction(gene_interactionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold_gene(threshold_geneSEXP);
    Rcpp::traits::input_parameter< double >::type g_min(g_minSEXP);
    Rcpp::traits::input_parameter< double >::type g_max(g_maxSEXP);
    Rcpp::traits::input_parameter< double >::type k_min(k_minSEXP);
    Rcpp::traits::input_parameter< double >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< int >::type possible_interactions(possible_interactionsSEXP);
    Rcpp::traits::input_parameter< long >::type model_count_max(model_count_maxSEXP);
    Rcpp::traits::input_parameter< long >::type threshold_max(threshold_maxSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< double >::type median_range(median_rangeSEXP);
    Rcpp::traits::input_parameter< double >::type standard_deviation_factor(standard_deviation_factorSEXP);
    rcpp_result_gen = Rcpp::wrap(threshold_calculator_uniform(gene_interaction, threshold_gene, g_min, g_max, k_min, k_max, possible_interactions, model_count_max, threshold_max, h, lambda_min, lambda_max, n_min, n_max, median_range, standard_deviation_factor));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sRACIPEv03_interaction_reader", (DL_FUNC) &_sRACIPEv03_interaction_reader, 4},
    {"_sRACIPEv03_multiGeneCircuit_EM_uniform_Darray_annealing", (DL_FUNC) &_sRACIPEv03_multiGeneCircuit_EM_uniform_Darray_annealing, 29},
    {"_sRACIPEv03_multiGeneCircuit_RK_adaptive_deterministic", (DL_FUNC) &_sRACIPEv03_multiGeneCircuit_RK_adaptive_deterministic, 22},
    {"_sRACIPEv03_multiGeneCircuit_RK_deterministic", (DL_FUNC) &_sRACIPEv03_multiGeneCircuit_RK_deterministic, 21},
    {"_sRACIPEv03_threshold_calculator_uniform", (DL_FUNC) &_sRACIPEv03_threshold_calculator_uniform, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_sRACIPEv03(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
