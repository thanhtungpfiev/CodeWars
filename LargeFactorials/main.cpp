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
#include <vector>
#include <algorithm>

using namespace std;

const int BASE = 10;

vector<int> convertNumberToElements(int number)
{
    vector<int> result;
    string numberString = std::to_string(number);
    for (const char &c : numberString) {
        result.push_back(c - '0');
    }
    return result;
}

vector<int> add(vector<int> &v1, vector<int> &v2)
{
    vector<int> result;
    std::reverse(v1.begin(), v1.end());
    std::reverse(v2.begin(), v2.end());
    if (v1.size() < v2.size()) {
        v1.resize(v2.size());
    } else {
        v2.resize(v1.size());
    }
    int extra = 0;
    int temp = 0;
    for (unsigned int i = 0; i < v1.size(); ++i) {
        temp = v1.at(i) + v2.at(i) + extra;
        result.push_back(temp % BASE);
        extra = temp / BASE;
    }
    if (extra) {
        result.push_back(extra);
    }
    std::reverse(result.begin(), result.end());
    return result;
}

vector<int> mul(vector<int> &v1, vector<int> &v2)
{
    vector<int> result;
    for (int i = v1.size() - 1; i >= 0; --i) {
        std::vector<int> temp_v;
        int extra = 0;
        int temp = 0;
        for (int j = v2.size() - 1; j >= 0; --j) {
            temp = v2.at(j) * v1.at(i) + extra;
            temp_v.push_back(temp % BASE);
            extra = temp / BASE;
        }
        if (extra > 0) {
            temp_v.push_back(extra);
        }
        std::reverse(temp_v.begin(), temp_v.end());
        for (unsigned int k = 0; k < v1.size() - i - 1; ++k) {
            temp_v.push_back(0);
        }
        result = add(result, temp_v);
    }
    return result;
}

string factorial(int factorial)
{
    string result;
    std::vector<int> result_v({1});
    if (factorial > 0) {
        for (int i = 1; i <= factorial; ++i) {
            std::vector<int> v2 = convertNumberToElements(i);
            result_v = mul(result_v, v2);
        }
        for (const auto &e : result_v) {
            result += std::to_string(e);
        }
    } else if (factorial == 0) {
        result = "1";
    }

    return result;
}

int main(int argc, char *argv[])
{
//    Assert::That(factorial(1), Equals("1"));
//    Assert::That(factorial(5), Equals("120"));
//    Assert::That(factorial(9), Equals("362880"));
//    Assert::That(factorial(15), Equals("1307674368000"));
    cout << factorial(1) << endl;
    cout << factorial(5) << endl;
    cout << factorial(9) << endl;
    cout << factorial(15) << endl;
    cout << factorial(1000) << endl;
    return 0;
}
