#ifndef FILTER_H
#define FILTER_H

#include "state.h"
#include "covariancematrix.h"

class Filter
{
public:
    Filter(const char* name="default");
private:
    State* m_X;
	CovarianceMatrix* m_P;
	CovarianceMatrix* m_Q;
};

#endif // FILTER_H
