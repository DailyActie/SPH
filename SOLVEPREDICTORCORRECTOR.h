/*
 * SOLVEPREDICTORCORRECTOR.h
 *
 *  Created on: Jul 7, 2011
 *      Author: tony
 */

#ifndef SOLVEPREDICTORCORRECTOR_H_
#define SOLVEPREDICTORCORRECTOR_H_

#include "SOLVECOMPRESSIBLE.h"

class SOLVE_PREDICTOR_CORRECTOR: public SOLVE_COMPRESSIBLE{
public:
	SOLVE_PREDICTOR_CORRECTOR(STORAGE*,EOS_BASE*);
	virtual ~SOLVE_PREDICTOR_CORRECTOR();
	//method
	virtual void step();
};

#endif /* SOLVEPREDICTORCORRECTOR_H_ */
