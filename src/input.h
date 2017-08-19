#ifndef INPUT_H
#define INPUT_H

#include <eigen3/Eigen/Dense>

class Input
{
public:
    Input(int size);
    Eigen::VectorXd getVector();

private:
    int m_size;
    Eigen::VectorXd m_vector;
};

#endif // INPUT_H
