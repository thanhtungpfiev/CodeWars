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

#include "asum.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << ASum::findNb(4183059834009) << endl;
    cout << ASum::findNb(24723578342962) << endl;
    cout << ASum::findNb(135440716410000) << endl;
    cout << ASum::findNb(40539911473216) << endl;
    cout << ASum::findNb(26825883955641) << endl;

    /* Test case
    test.assert_equals(find_nb(4183059834009), 2022)
    test.assert_equals(find_nb(24723578342962), -1)
    test.assert_equals(find_nb(135440716410000), 4824)
    test.assert_equals(find_nb(40539911473216), 3568)
    test.assert_equals(find_nb(26825883955641), 3218)
    */

    return 0;
}
