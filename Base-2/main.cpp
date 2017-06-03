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

    /* Test case
    test.assert_equals(int_to_negabinary(6), '11010')
    test.assert_equals(int_to_negabinary(-6), '1110')

    test.assert_equals(negabinary_to_int('11010'), 6)
    test.assert_equals(negabinary_to_int('1110'), -6)
    */

    return 0;
}
