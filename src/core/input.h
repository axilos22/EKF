#ifndef INPUT_H
#define INPUT_H

#include "externalTool.h"

class Input
{
public:
    Input(int size);
    Eigen::VectorXd getVector();
    double getElement(int rank);
    double operator() (int rank);

protected:
    void setElement(int rank, double value);

private:
    int m_size;
    Eigen::VectorXd *m_vector;
};

#endif // INPUT_H
