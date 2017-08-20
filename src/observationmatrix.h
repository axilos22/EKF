#ifndef OBSERVATIONMATRIX_H
#define OBSERVATIONMATRIX_H

#include "externalTool.h"

using namespace Eigen;

class ObservationMatrix
{
public:
    ObservationMatrix(int row, int col);
    MatrixXd getMatrix();

private:
    int m_row;
    int m_col;
    MatrixXd* m_matrix;
};

#endif // OBSERVATIONMATRIX_H
