#include "robotefk.h"

#define STATE_SIZE 3
#define MEASUREMENT1_SIZE 3

double RobotEFK::robotWheelSpace = 10.0;

RobotEFK::RobotEFK(const char *name) :
    Filter(name)
{
    m_X = new State(STATE_SIZE);
    m_P = new CovarianceMatrix(STATE_SIZE);
    m_Q = new CovarianceMatrix(STATE_SIZE);
}

int RobotEFK::predict(State x, Input u)
{
    double deltaD = (1/2.)*(u(lEncoderRank) + u(rEncoderRank));
    double deltaTheta = (1/robotWheelSpace)*(u(lEncoderRank) - u(rEncoderRank));
}
