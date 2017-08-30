#include "matrixmanipulator.h"

MatrixManipulator::MatrixManipulator(int row, int col):
    m_row(row),
    m_col(col)
{
    m_matrix = new MatrixXd(row,col);
}

MatrixXd MatrixManipulator::getMatrix()
{
    return *m_matrix;
}

void MatrixManipulator::init(double *values)
{
    for(int row=0;row<m_row;row++) {
        for(int col=0;col<m_col;col++) {
            setElement(row,col,values[row+col]);
        }
    }
}

void MatrixManipulator::fill(double value)
{
    for(int row=0;row<m_row;row++) {
        for(int col=0;col<m_col;col++) {
            setElement(row,col,value);
        }
    }
}

void MatrixManipulator::setElement(int row, int col, double value)
{
    (*m_matrix)(row,col) = value;
}

void MatrixManipulator::setDiagonal(double *values)
{
    for(int i=0;i<m_col;i++)
    {
        m_matrix->diagonal()[i] = values[i];
    }
}
