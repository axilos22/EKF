#ifndef ROBOTEFK_H
#define ROBOTEFK_H

#include "core/filter.h"

class RobotEFK : public Filter
{
    enum u_rank{
        lEncoderRank = 0,
        rEncoderRank = 1
    };

    enum x_rank{
        xRank = 0,
        yRank = 1,
        thetaRank = 2
    };

public:
    static double robotWheelSpace;
    RobotEFK(const char* name);
    int predict(State x, Input u);
};

#endif // ROBOTEFK_H
