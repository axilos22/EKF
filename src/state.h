#ifndef STATE_H
#define STATE_H

#include <eigen3/Eigen/Dense>

class State
{
public:
    State(int size);
	void init(const double * values);
    void init(Eigen::VectorXd x0);
	int getSize();
	Eigen::VectorXd getVector();

private:
    int m_size;
    Eigen::VectorXd m_vector;


};

#endif // STATE_H
