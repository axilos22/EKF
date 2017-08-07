#ifndef STATE_H
#define STATE_H


class State
{
public:
    State(int size=1) = 0;
    init(const int* values);
private:
    unsigned int m_size;
    Eigen::Vector3d m_vector;


};

#endif // STATE_H
