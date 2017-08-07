#ifndef FILTER_H
#define FILTER_H
#include "state.h"

class Filter
{
public:
    Filter(const char* name="default");
private:
    State m_state;
};

#endif // FILTER_H
