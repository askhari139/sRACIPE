
#' Function to generate stochastic trajectories
#' @param ANNEAL Whether to use annealing (if TRUE) or constant noise simulations (FALSE)
#' @param input2 this is another input
#' @export
#'

sRACIPE_stochastic <- function( topology_file="inputs/test.tpo", config_file ="inputs/sRACIPE.cfg",ANNEAL=F, NUM_MODELS=100, PARAMETER_RANGE=100, MPR_MIN=1.,MPR_MAX=100, DNR_MIN=0.1,DNR_MAX=1.,FCH_MIN=1,FCH_MAX=100,HCO_MIN=1L,HCO_MAX=6L,STEP_SIZE=0.02,SIM_TIME=50.0,MEDIAN_RANGE=100.0,INITIAL_CONDITIONS=1L,NOISE_LEVELS=30L,MAX_NOISE=30.0,NOISE_SCALING_FACTOR=0.9,SHOT_NOISE_SCALING=0L,GENE_NOISE_SCALING=0L,FILE_WRITING_INTERVAL=1L,OUTPUT_PRECISION=12L){

   working_directory<-getwd()
  if(missing(topology_file)){
    if(!exists("topology")){
      message("Please specify a topology file first")
      return()
    }
  }
  else
  {
    topology <- sRACIPE_load_topology(topology_file = topology_file)
    message("Topology file loaded.")
  }

  if(!exists("configuration")){
    message("Configuration file not found. Using default configuration settings")
    if(!exists("configuration")) configuration <<- data.frame(ANNEAL=FALSE, NUM_MODELS=1000, PARAMETER_RANGE=100, MPR_MIN=1.,MPR_MAX=100, DNR_MIN=0.1,DNR_MAX=1.,FCH_MIN=1,FCH_MAX=100,HCO_MIN=1L,HCO_MAX=6L,STEP_SIZE=0.02,SIM_TIME=50.0,MEDIAN_RANGE=100.0,INITIAL_CONDITIONS=1L,OUTPUT_PRECISION=12L,THRESHOLD_MODELS=5000,  NOISE_LEVELS=30L,MAX_NOISE=30.0, NOISE_SCALING_FACTOR=0.9, SHOT_NOISE_SCALING=0L,GENE_NOISE_SCALING=0L,FILE_WRITING_INTERVAL=10L, stringsAsFactors = T)

  }
  else
  {
    #configuration <<- sRACIPE_load_configuration(config_file = config_file)
    #message("Topology file loaded.")
    #print(configuration)
  }


  if(!missing(ANNEAL)){
    #print("test1")

    if(ANNEAL)
      configuration$ANNEALING<-1L
    else
      configuration$ANNEALING<-0L
  } else {
    configuration$ANNEALING<-0L
  }
  if(!missing(NUM_MODELS)){
    configuration$NUM_MODELS <- NUM_MODELS
  }

  if(!missing(PARAMETER_RANGE)){
    configuration$PARAMETER_RANGE <- PARAMETER_RANGE
  }
  if(!missing(MPR_MIN)){
    configuration$MPR_MIN <- MPR_MIN
  }
  if(!missing(MPR_MAX)){
    configuration$MPR_MAX <- MPR_MAX
  }

  if(!missing(DNR_MIN)){
    configuration$DNR_MIN <- DNR_MIN
  }
  if(!missing(DNR_MAX)){
    configuration$DNR_MAX <- DNR_MAX
  }
  if(!missing(FCH_MIN)){
    configuration$FCH_MIN <- FCH_MIN
  }
  if(!missing(FCH_MAX)){
    configuration$FCH_MAX <- FCH_MAX
  }
  if(!missing(HCO_MIN)){
    configuration$HCO_MIN <- HCO_MIN
  }
  if(!missing(HCO_MAX)){
    configuration$HCO_MAX <- HCO_MAX
  }
  if(!missing(STEP_SIZE)){
    configuration$STEP_SIZE <- STEP_SIZE
  }
  if(!missing(SIM_TIME)){
    configuration$SIM_TIME <- SIM_TIME
  }
  if(!missing(MEDIAN_RANGE)){
    configuration$MEDIAN_RANGE <- MEDIAN_RANGE
  }
  if(!missing(INITIAL_CONDITIONS)){
    configuration$INITIAL_CONDITIONS <- INITIAL_CONDITIONS
  }
  if(!missing(OUTPUT_PRECISION)){
    configuration$OUTPUT_PRECISION <- OUTPUT_PRECISION
  }

  if(!missing(NOISE_LEVELS)){
    configuration$NOISE_LEVELS <- NOISE_LEVELS
  }
  if(!missing(MAX_NOISE)){
    configuration$MAX_NOISE <- MAX_NOISE
  }
  if(!missing(NOISE_SCALING_FACTOR)){
    configuration$NOISE_SCALING_FACTOR <- NOISE_SCALING_FACTOR
  }
  if(!missing(SHOT_NOISE_SCALING)){
    configuration$SHOT_NOISE_SCALING <- SHOT_NOISE_SCALING
  }
  if(!missing(GENE_NOISE_SCALING)){
    configuration$GENE_NOISE_SCALING <-GENE_NOISE_SCALING
  }

  if(!missing(FILE_WRITING_INTERVAL)){
    configuration$FILE_WRITING_INTERVAL <-FILE_WRITING_INTERVAL
  }

  if(configuration$FILE_WRITING_INTERVAL > configuration$NUM_MODELS) configuration$FILE_WRITING_INTERVAL <- configuration$NUM_MODELS
  print("Configuration file successfully loaded.")
  configuration$CONSTANT_NOISE <- 1;
  configuration$possible_interactions <- 3;
  configuration$standard_deviation_factor <- 0.5658;

configuration$MPR_MIN <- 0.5*(configuration$MPR_MIN + configuration$MPR_MAX) - 0.5*(configuration$MPR_MAX - configuration$MPR_MIN)*configuration$PARAMETER_RANGE/100
configuration$MPR_MAX <- 0.5*(configuration$MPR_MIN + configuration$MPR_MAX) + 0.5*(configuration$MPR_MAX - configuration$MPR_MIN)*configuration$PARAMETER_RANGE/100

configuration$DNR_MIN <- 0.5*(configuration$DNR_MIN + configuration$DNR_MAX) - 0.5*(configuration$DNR_MAX - configuration$DNR_MIN)*configuration$PARAMETER_RANGE/100
configuration$DNR_MAX <- 0.5*(configuration$DNR_MIN + configuration$DNR_MAX) + 0.5*(configuration$DNR_MAX - configuration$DNR_MIN)*configuration$PARAMETER_RANGE/100

configuration$FCH_MIN <- 0.5*(configuration$FCH_MIN + configuration$FCH_MAX) - 0.5*(configuration$FCH_MAX - configuration$FCH_MIN)*configuration$PARAMETER_RANGE/100
configuration$FCH_MAX <- 0.5*(configuration$FCH_MIN + configuration$FCH_MAX) + 0.5*(configuration$FCH_MAX - configuration$FCH_MIN)*configuration$PARAMETER_RANGE/100

# configuration$MAX_NOISE <- configuration$MAX_NOISE/(topology$number_gene)
print(configuration)


results_directory<-ifelse(!dir.exists(file.path(working_directory, "results")), dir.create(file.path(working_directory, "results")), TRUE)
output_directory<-file.path(working_directory, "results")


gene_interaction <- matrix(0, nrow = topology$number_gene, ncol = topology$number_gene)
threshold_gene <- rep(0, topology$number_gene)
#Rcpp::sourceCpp("src/interaction_reader.cpp")
gene_interaction <- interaction_reader(gene_interaction,topology$topology_filepath,  topology$filename, topology$number_gene)



message("Generating gene thresholds")
#Rcpp::sourceCpp("src/threshold_generator.cpp")

threshold_test<- threshold_calculator_uniform( gene_interaction,  threshold_gene,  configuration$MPR_MIN,  configuration$MPR_MAX, configuration$DNR_MIN,  configuration$DNR_MAX,  configuration$possible_interactions,   configuration$NUM_MODELS,  configuration$THRESHOLD_MODELS,  configuration$STEP_SIZE,  configuration$FCH_MIN, configuration$FCH_MAX,  configuration$HCO_MIN,  configuration$HCO_MAX,  configuration$MEDIAN_RANGE,  configuration$standard_deviation_factor)
if(threshold_test!=0)
  print("Error in threshold generation")
#print(topology$number_gene)
#return()
message("Running the stochastic simulations")
print(configuration)
configuration <<- configuration
#Rcpp::sourceCpp("src/multiGeneCircuit_EM_uniform_Darray_annealing.cpp")

Time_evolution_test<- multiGeneCircuit_EM_uniform_Darray_annealing(gene_interaction =  gene_interaction, threshold_gene =   threshold_gene, g_min =  configuration$MPR_MIN,  g_max =  configuration$MPR_MAX,k_min = configuration$DNR_MIN,  k_max =  configuration$DNR_MAX, possible_interactions =  configuration$possible_interactions, model_count_max =  configuration$NUM_MODELS, threshold_max =  configuration$THRESHOLD_MODELS, h =  configuration$STEP_SIZE, lambda_min =  configuration$FCH_MIN,lambda_max =  configuration$FCH_MAX, n_min =  configuration$HCO_MIN, n_max =   configuration$HCO_MAX, tot_time =  configuration$SIM_TIME, median_range =  configuration$MEDIAN_RANGE, standard_deviation_factor =  configuration$standard_deviation_factor, number_gene =  topology$number_gene, D_max =   configuration$MAX_NOISE, D_shot_scaling =  configuration$SHOT_NOISE_SCALING, GENE_NOISE_SCALING =  configuration$GENE_NOISE_SCALING, file_writing_interval =  configuration$FILE_WRITING_INTERVAL, D_levels =  configuration$NOISE_LEVELS, D_scaling =  configuration$NOISE_SCALING_FACTOR, output_precision =  configuration$OUTPUT_PRECISION,ANNEALING =   configuration$ANNEALING, CONSTANT_NOISE =  configuration$CONSTANT_NOISE,INITIAL_CONDITIONS =   configuration$INITIAL_CONDITIONS,filename =   topology$filename)



if(Time_evolution_test!=0)
  message("Error in time evolution function")
output_file <- paste(working_directory,"/results/sRACIPE_EM_",topology$filename,"_g",toString(topology$number_gene), "_Annealing_",configuration$ANNEALING,"_output.txt", sep="")
return(output_file)

}
