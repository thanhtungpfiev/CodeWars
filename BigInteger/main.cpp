/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 23 - 5 - 2017
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

#include "bigintegerutil.h"

using namespace std;

int main(int argc, char *argv[])
{
    std::vector<int> result = BigIntegerUtil::convertNumberToElements(1990);
    for (const auto &e : result) {
        cout << e << endl;
    }
    return 0;
}
