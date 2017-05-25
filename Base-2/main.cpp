/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 19 - 5 - 2017
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>
#include "negabinary.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << Negabinary::ToNegabinary(0) << endl;
    cout << Negabinary::ToInt("10110") << endl;
    return 0;
}
