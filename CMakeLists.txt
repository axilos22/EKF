cmake_minimum_required (VERSION 2.6)
project (EKF)
# The version number.
set (EKF_VERSION_MAJOR 0)
set (SRC_DIR /src)

include_directories("${SRC_DIR}")

add_executable(EKF filter.cpp)
add_executable(EKF state.cpp)
add_executable(EKF covarianceMatrix.cpp)
