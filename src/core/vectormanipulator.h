#ifndef ABSTRACTVECTORMANIPULATOR_H
#define ABSTRACTVECTORMANIPULATOR_H

#include "externalTool.h"
#include "cstdio"

class VectorManipulator
{
public:
    VectorManipulator(int size);
    ~VectorManipulator();
    void init(double *values);
    double getElement(int rank);
    double operator() (int rank);
    Eigen::VectorXd getVector();
    int getSize();

protected:
    void setElement(int rank, double value);
    double operator() (int rank, double value);
    void setVector(Eigen::VectorXd vector);

private:
    int m_size;
    Eigen::VectorXd *m_vector;
};

#endif // ABSTRACTVECTORMANIPULATOR_H
