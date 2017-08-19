#include "input.h"

Input::Input(int size) :
    m_size(size)
{
    m_vector = Eigen::VectorXd(m_size);
}

Eigen::VectorXd Input::getVector()
{
    return m_vector;
}