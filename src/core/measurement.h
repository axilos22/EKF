#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include "externalTool.h"

class Measurement
{
public:
    Measurement(int size);
    Eigen::VectorXd getVector();

private:
    int m_size;
    Eigen::VectorXd* m_vector;
};

#endif // MEASUREMENT_H
