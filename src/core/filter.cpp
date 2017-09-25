#include "filter.h"

Filter::Filter(const char *name)
{

}

Filter::~Filter()
{
    delete m_X;
    delete m_P;
    delete m_Q;
}
