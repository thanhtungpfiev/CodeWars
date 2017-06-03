/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/25/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

#include "bankerplan.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << BankerPlan::fortune(100000, 1, 2000, 15, 1) << endl;
    cout << BankerPlan::fortune(100000, 1, 9185, 12, 1) << endl;

    /* Test case
    test1 = run_shell args: [441759, 2, 56182, 14, 5]
    expect(test1).to include("false")
    test2 = run_shell args: [5319117, 2, 544150, 21, 5]
    expect(test2).to include("false")
    test3 = run_shell args: [5114852, 1, 526181, 23, 1]
    expect(test3).to include("false")
    test4 = run_shell args: [12736783, 1, 1287302, 7, 2]
    expect(test4).to include("true")
    test5 = run_shell args: [9472641, 3, 961855, 6, 1]
    expect(test5).to include("true")
    */

    return 0;
}
