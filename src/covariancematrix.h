#ifndef COVARIANCEMATRIX_H
#define COVARIANCEMATRIX_H

#include "externalTool.h"

class CovarianceMatrix
{
public:
    CovarianceMatrix(int size);
    void setDiagonal(double* diagValues);
    Eigen::MatrixXd getMatrix();
private:
    int m_size;
    Eigen::MatrixXd m_matrix;
};

#endif // COVARIANCEMATRIX_H
