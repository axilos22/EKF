#include "matrixmanipulator.h"
#include <iostream>

MatrixManipulator::MatrixManipulator(int row, int col):
    m_row(row),
    m_col(col)
{
    std::cout << "MatrixManipulator const" << std::endl;
    m_matrix = new MatrixXd(row,col);
}

MatrixXd MatrixManipulator::getMatrix()
{
    return *m_matrix;
}

void MatrixManipulator::init(double *values)
{
    int valueRank=0;
    for(int row=0;row<m_row;row++) {
        for(int col=0;col<m_col;col++) {
            setElement(row,col,values[valueRank]);
            valueRank++;
        }
    }
}

//TODO : testing failed need patch
void MatrixManipulator::fill(double value)
{
    double tab[m_row*m_col];
    for(int rank;rank<m_row*m_col;rank++) {
        tab[rank] = value;
        std::cout << "tab[" << rank << "] = " << value << std::endl;
    }
    init(tab);
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
