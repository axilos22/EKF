#include "measurement.h"

Measurement::Measurement(int size) :
    m_size(size)
{
    m_vector = new Eigen::VectorXd(m_size);
}

Eigen::VectorXd Measurement::getVector()
{
    return *m_vector;
}
