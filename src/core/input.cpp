#include "input.h"

Input::Input(int size) :
    m_size(size)
{
    m_vector = new Eigen::VectorXd(m_size);
}

Eigen::VectorXd Input::getVector()
{
    return *m_vector;
}

double Input::getElement(int rank)
{
    return (*m_vector)(rank);
}

double Input::operator()(int rank)
{
    return getElement(rank);
}

void Input::setElement(int rank, double value)
{
    (*m_vector)(rank) = value;
}
