/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/24/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

std::string is_sorted_and_how(std::vector<int> array)
{
    std::string result;
    if (std::is_sorted(array.begin(), array.end())) {
        result = "yes, ascending";
    } else if (std::is_sorted(array.begin(), array.end(), std::greater<int>{})) {
        result = "yes, descending";
    } else {
        result = "no";
    }
    return result;
}

int main(int argc, char *argv[])
{
    vector<int> array({1, 3 , 2});
    cout << is_sorted_and_how(array) << endl;

    /* Test case
    Describe(is_sorted_and_how_test)
    {
        It(simple_array_1)
        {
            Assert::That(is_sorted_and_how({1, 2}), Equals("yes, ascending"));
        }

        It(simple_array_2)
        {
            Assert::That(is_sorted_and_how({15, 7, 3, -8}), Equals("yes, descending"));
        }

        It(simple_array_3)
        {
            Assert::That(is_sorted_and_how({4, 2, 30}), Equals("no"));
        }
    };
    */

    return 0;
}
