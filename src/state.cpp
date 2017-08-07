#include "state.h"

State::State(int size) :
    m_size(size)
{   
}

State::init(const int *values)
{
    for(int rank;rank<=size;rank++)
    {
        m_vector(rank) = values[rank];
    }
}
