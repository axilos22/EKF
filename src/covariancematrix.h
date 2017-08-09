#ifndef COVARIANCEMATRIX_H
#define COVARIANCEMATRIX_H

#include <Eigen\Dense>

class CovarianceMatrix
{
public:
    CovarianceMatrix(int size);
private:
    unsigned int m_size;
	Eigen::MatrixXd* m_matrix;
};

#endif // COVARIANCEMATRIX_H
