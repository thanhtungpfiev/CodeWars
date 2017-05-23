/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 21 - 5 - 2017
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

#include "sumofdivided.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    std::vector<int> d1 = {15, 30, -45};
    cout << SumOfDivided::sumOfDivided(d1) << endl;
    return 0;
}
