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

#include "kata.h"

using namespace std;

int main(int argc, char *argv[])
{
    Kata k;
    vector<int> result = k.foldArray(vector<int>({1, 2, 3, 4, 5}), 2);
    for (const auto &e : result) {
        cout << e << " ";
    }
    cout << endl;

    /* Test case
    Describe(Tests)
    {
        It(ExampleTest1)
        {
            std::vector<int> expected = { 6, 6, 3 };

            Kata kata;
            std::vector<int> actual = kata.foldArray({ 1, 2, 3, 4, 5 }, 1);

            Assert::That(actual, Is().EqualTo(expected));
        }

        It(ExampleTest2)
        {
            std::vector<int> expected = { 9, 6 };

            Kata kata;
            std::vector<int> actual = kata.foldArray({ 1, 2, 3, 4, 5 }, 2);

            Assert::That(actual, Is().EqualTo(expected));
        }

        It(ExampleTest3)
        {
            std::vector<int> expected = { 15 };

            Kata kata;
            std::vector<int> actual = kata.foldArray({ 1, 2, 3, 4, 5 }, 3);

            Assert::That(actual, Is().EqualTo(expected));
        }

        It(ExampleTest4)
        {
            std::vector<int> expected = { 14, 75, 0 };

            Kata kata;
            std::vector<int> actual = kata.foldArray({ -9, 9, -8, 8, 66, 23 }, 1);

            Assert::That(actual, Is().EqualTo(expected));
        }
    };
    */

    return 0;
}
