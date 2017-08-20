#include "measurement.h"

Measurement::Measurement(int size) :
    m_size(size)
{
    m_vector = Eigen::VectorXd(m_size);
}

Eigen::VectorXd Measurement::getVector()
{
    return m_vector;
}
