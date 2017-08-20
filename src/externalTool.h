#ifndef EXTERNALTOOL_H
#define EXTERNALTOOL_H

/*
 * EIGEN
 */
#ifdef __linux__
    #include <eigen3/Eigen/Dense>
#elif _WIN32
    #include <Eigen/Dense>
#endif

#endif // EXTERNALTOOL_H
