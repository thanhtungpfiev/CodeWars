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

    /* Test case
    void testequal(std::string ans, std::string sol)
    {
        Assert::That(ans, Equals(sol));
    }

    Describe(sumOfDivided_Tests)
    {
        It(Fixed_Tests)
        {
            std::vector<int> d1 = {12, 15};
            std::string ans1 = SumOfDivided::sumOfDivided(d1);
            std::string sol1 = "(2 12)(3 27)(5 15)";
            testequal(ans1, sol1);
        }
    };
    */

    return 0;
}
