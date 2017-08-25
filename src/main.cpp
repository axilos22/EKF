#include <iostream>
#include "core/state.h"
#include "core/observationmatrix.h"

/*TODO :
 * Separate all elements as sub folder: filter / filterTool / filterImplementation (src)
*/

using namespace std;
using namespace Eigen;


void stateTest() {
    State x(2);
    double vals[2] = {2,3};
    x.init(vals);
    VectorXd state = x.getVector();
    cout << state << endl;
}

void obsMatrixTest() {
    ObservationMatrix obs(6,6);
    MatrixXd mat = obs.getMatrix();
    cout << "matRows= " << mat.rows() << "matCols= " << mat.cols() << endl;
    cout << "add info:" << mat.coeff(2) << endl;
}

int main()
{
    cout << "Starting program" << endl;
    stateTest();
    return 0;
}


