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
    return 0;
}
