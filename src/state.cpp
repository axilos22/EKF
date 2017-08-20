#include "state.h"

State::State(int size) :
    m_size(size)
{
    m_vector = new Eigen::VectorXd(m_size);
}

void State::init(const double *values)
{
	for (int rank = 0; rank < m_size; rank++)
	{
        setVectorElement(rank,values[rank]);
    }
}

void State::init(Eigen::VectorXd x0)
{
    *m_vector = x0;
}

int State::getSize()
{
	return m_size;
}

Eigen::VectorXd State::getVector()
{
    return *m_vector;
}

void State::setVectorElement(int rank, double el)
{
    (*m_vector)(rank) = el;
}
