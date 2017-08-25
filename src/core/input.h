#ifndef INPUT_H
#define INPUT_H

#include "externalTool.h"

class Input
{
public:
    Input(int size);
    Eigen::VectorXd getVector();
    double getElement(const int rank);

private:
    int m_size;
    Eigen::VectorXd *m_vector;
};

#endif // INPUT_H
