#ifndef COVARIANCEMATRIX_H
#define COVARIANCEMATRIX_H


class CovarianceMatrix
{
public:
    CovarianceMatrix(int size)=0;
private:
    unsigned int m_size;
    Eigen::MatrixXd m_matrix;
};

#endif // COVARIANCEMATRIX_H
