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

#include "prodfib.h"

using namespace std;

int main(int argc, char *argv[])
{

    std::vector<ull> result;
    result = ProdFib::productFib(4895);
    for (const auto &e : result) {
        cout << e << " ";
    }
    cout << endl;
    result = ProdFib::productFib(5895);
    for (const auto &e : result) {
        cout << e << " ";
    }
    cout << endl;
    result = ProdFib::productFib(74049690);
    for (const auto &e : result) {
        cout << e << " ";
    }
    cout << endl;
    result = ProdFib::productFib(84049690);
    for (const auto &e : result) {
        cout << e << " ";
    }
    cout << endl;

    /* Test case)
    typedef unsigned long long ull;
    void testequal(std::vector<ull> ans, std::vector<ull> sol)
    {
        Assert::That(ans, Equals(sol));
    }
    void dotest(ull prod, std::vector<ull> expected)
    {
        testequal(ProdFib::productFib(prod), expected);
    }
    Describe(productFib_Tests)
    {
        It(Fixed__Tests)
        {
            dotest(4895, {55, 89, true});
            dotest(5895, {89, 144, false});
            dotest(74049690, {6765, 10946, 1ULL});
            dotest(84049690, {10946, 17711, 0ULL});
        }
    };
    */

    return 0;
}
