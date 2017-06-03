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

#include "piapprox.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << PiApprox::iterPi(0.1) << endl;

    /* Test case
    Describe(PiapproxTest)
    {
        It(test1)
        {
            string sol1 = "[10, 3.0418396189]";
            string ans1 = PiApprox::iterPi(0.1);
            Assert::That(ans1, Equals(sol1));
        }
    };
    */

    return 0;
}
