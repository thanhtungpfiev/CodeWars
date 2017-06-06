/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/5/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

#include "dioph.h"

using namespace std;

int main(int argc, char *argv[])
{
    /* Test case
    void testequal(std::vector<std::pair <long, long>> ans, std::vector<std::pair <long, long>> sol)
    {
        Assert::That(ans, Equals(sol));
    }
    Describe(sumFracts_Tests)
    {
        It(test1)
        {
            std::vector<std::pair <long, long>> ans1 = Dioph::solEquaStr(5);
            std::vector<std::pair <long, long>> sol1 = { {3, 1} };
            testequal(ans1, sol1);

            std::vector<std::pair <long, long>> ans2 = Dioph::solEquaStr(9001);
            std::vector<std::pair <long, long>> sol2 = { {4501, 2250} };
            testequal(ans2, sol2);
        }
    };
    */

    std::vector<std::pair <long, long>> ans1 = Dioph::solEquaStr(9001);

    for (unsigned int i = 0; i < ans1.size(); ++i) {
        std::pair<long, long> it = ans1.at(i);
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
