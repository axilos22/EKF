#ifndef MATRIXMANIPULATOR_H
#define MATRIXMANIPULATOR_H

#include "externalTool.h"

using namespace Eigen;

class MatrixManipulator
{
public:
    MatrixManipulator(int row, int col);
    MatrixXd getMatrix();

protected:
    void init(double* values);
    void fill(double value);
    void setElement(int row, int col, double value);
    void setDiagonal(double* values);

private:
    int m_row;
    int m_col;
    MatrixXd* m_matrix;
};

#endif // MATRIXMANIPULATOR_H
