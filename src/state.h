#ifndef STATE_H
#define STATE_H

#include <Eigen\Dense>

class State
{
public:
    State(int size);
	void init(const double * values);
	int getSize();
	Eigen::VectorXd getVector();
private:
    int m_size;
    Eigen::VectorXd* m_vector;

	void setSize(int size);


};

#endif // STATE_H
