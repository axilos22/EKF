#ifndef COVARIANCEMATRIX_H
#define COVARIANCEMATRIX_H

#ifdef __linux__
    #include <eigen3/Eigen/Dense>
#elif _WIN32
    #include <Eigen/Dense>
#endif

class CovarianceMatrix
{
public:
    CovarianceMatrix(int size);
    void setDiagonal(double* diagValues);
private:
    int m_size;
    Eigen::MatrixXd m_matrix;
};

#endif // COVARIANCEMATRIX_H
