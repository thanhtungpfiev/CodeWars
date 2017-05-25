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
    return 0;
}
