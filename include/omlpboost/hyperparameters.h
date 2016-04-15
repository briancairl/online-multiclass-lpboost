// -*- C++ -*-
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2010 Amir Saffari, amir@ymer.org
 * Copyright (C) 2010 Amir Saffari, 
 *                    Institute for Computer Graphics and Vision, 
 *                    Graz University of Technology, Austria
 */

#ifndef HYPERPARAMETERS_H_
#define HYPERPARAMETERS_H_

#include <string>

using namespace std;

typedef enum
{
  EXPONENTIAL,
  LOGIT
} LossFn_t;


typedef enum
{
  WEAK_ORF,
  WEAK_LARANK
} WeakLearner_t;


class Hyperparameters
{
 public:

  // Forest
  int numRandomTests;
  int counterThreshold;
  int maxDepth;
  int numTrees;

  // Linear LaRank
  double larankC;

  // Boosting
  int numBases;
  WeakLearner_t weakLearner;

  // Online MCBoost
  double shrinkage;
  LossFn_t lossFunction;

  // Online MCLPBoost
  double C;
  int cacheSize;
  double nuD;
  double nuP;
  double annealingRate;
  double theta;
  int numIterations;

  // Experimenter
  int findTrainError;
  int numEpochs;

  // Data
  string trainData;
  string trainLabels;
  string testData;
  string testLabels;

  // Output
  string savePath;
  int verbose;
};

#endif /* HYPERPARAMETERS_H_ */
