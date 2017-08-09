#include "state.h"

State::State(int size) :
    m_size(size)
{}

void State::init(const double * values)
{
	for (int rank = 0; rank < m_size; rank++)
	{
		*m_vector << values[rank];
	}
}

int State::getSize()
{
	return m_size;
}

Eigen::VectorXd State::getVector()
{
	return *m_vector;
}

void State::setSize(int size)
{
	m_size = size;
}
