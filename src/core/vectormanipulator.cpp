#include "vectormanipulator.h"

VectorManipulator::VectorManipulator(int size) :
    m_size(size)
{
    m_vector = new Eigen::VectorXd(size);
}

VectorManipulator::~VectorManipulator()
{
    delete m_vector;
}

double VectorManipulator::getElement(int rank)
{
    return (*m_vector)(rank);
}

double VectorManipulator::operator()(int rank)
{
    return getElement(rank);
}

Eigen::VectorXd VectorManipulator::getVector()
{
    return *m_vector;
}

void VectorManipulator::setElement(int rank, double value)
{
    if(rank < m_size)
    {
        (*m_vector)(rank) = value;
    } else {
        printf("Assigment out of bounds %d > %d",rank,m_size);
        return;
    }

}

double VectorManipulator::operator()(int rank, double value)
{
    setElement(rank,value);
}

void VectorManipulator::setVector(Eigen::VectorXd vector)
{
    (*m_vector) = vector;
}
