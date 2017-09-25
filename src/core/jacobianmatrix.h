#ifndef JACOBIANMATRIX_H
#define JACOBIANMATRIX_H

#include "matrixmanipulator.h"

class JacobianMatrix : public MatrixManipulator
{
public:
    JacobianMatrix(int size);
    bool ensureInvertible();
};

#endif // JACOBIANMATRIX_H
