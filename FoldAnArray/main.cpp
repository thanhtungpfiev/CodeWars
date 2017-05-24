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
    return 0;
}
