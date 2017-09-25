#ifndef FILTER_H
#define FILTER_H

#include "state.h"
#include "covariancematrix.h"
#include "input.h"
#include "measurement.h"
#include "jacobianmatrix.h"

class Filter
{
public:
    Filter(const char* name="default");
    ~Filter();
    virtual int predict(State x, Input u) = 0;
    virtual int update(State x, Measurement y) = 0;
protected:
    State* m_X;
    CovarianceMatrix* m_P;
    CovarianceMatrix* m_Q;
    JacobianMatrix* m_F;
};

#endif // FILTER_H
