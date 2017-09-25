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
    //odometry equations - (2,0) robot
    //STATE PREDICT
    double deltaD = (0.5)*(u(rEncoderRank) + u(lEncoderRank));
    double deltaTheta = (1/robotWheelSpace)*(u(rEncoderRank) - u(lEncoderRank));
    m_X->setElement(xRank, x(xRank) + deltaD*cos(x(thetaRank) + 0.5*deltaTheta));
    m_X->setElement(yRank, x(yRank) + deltaD*sin(x(thetaRank) + 0.5*deltaTheta));
    m_X->setElement(thetaRank, x(thetaRank) + deltaTheta);
    //P Matrix PREDICT
    m_P->getMatrix() = m_F->getMatrix() * m_P->getMatrix() * m_F->getMatrix().transpose();
    return 0;
}
