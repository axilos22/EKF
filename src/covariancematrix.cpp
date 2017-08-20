#include "covariancematrix.h"

CovarianceMatrix::CovarianceMatrix(int size) :
    m_size(size)
{
    m_matrix = new Eigen::MatrixXd(m_size,m_size);
}

void CovarianceMatrix::setDiagonal(double *diagValues)
{
    for(int i=0;i<m_size;i++)
    {
        m_matrix->diagonal()[i] = diagValues[i];
    }
}

Eigen::MatrixXd CovarianceMatrix::getMatrix()
{
    return *m_matrix;
}
