#ifndef FILTER_H
#define FILTER_H

#include "state.h"
#include "covariancematrix.h"
#include "input.h"
#include "measurement.h"

class Filter
{
public:
    Filter(const char* name="default");
    virtual int predict(State x, Input u) = 0;
    virtual int update(State x, Measurement y) = 0;
private:
    State* m_X;
    CovarianceMatrix* m_P;
    CovarianceMatrix* m_Q;
};

#endif // FILTER_H
