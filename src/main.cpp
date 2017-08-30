#include <iostream>
#include "core/state.h"
#include "core/observationmatrix.h"

/*TODO :
 * Separate all elements as sub folder: filter / filterTool / filterImplementation (src)
*/

using namespace std;
using namespace Eigen;


void stateTest() {
    cout << "state Test" << endl;
    State x(2);
    double vals[2] = {2,3};
    x.init(vals);
    VectorXd state = x.getVector();
    cout << state << endl;
}

void obsMatrixTest() {
    cout << "Obs Matrix Test" << endl;
    ObservationMatrix obs(3,3);
    double nb[] = { 16.3, 2.3, 77.2, 40.1};
    obs.init(nb);
    MatrixXd mat = obs.getMatrix();
    cout << mat << endl;
}

int main()
{
    cout << "Starting program" << endl;
    stateTest();
    obsMatrixTest();
    return 0;
}


