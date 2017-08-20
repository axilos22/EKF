#include "observationmatrix.h"

ObservationMatrix::ObservationMatrix(int row, int col) :
    m_row(row),
    m_col(col)
{
    m_matrix = new MatrixXd(row,col);
}

MatrixXd ObservationMatrix::getMatrix()
{
    return *m_matrix;
}
