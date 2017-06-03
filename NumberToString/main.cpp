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
#include <algorithm>
#include <sstream>

using namespace std;

string numberToString(double n)
{
  std::stringstream ss;
  ss << fixed << n;
  string result = ss.str();
  if (result.find('.') != std::string::npos) {
    auto it = std::find_if(result.rbegin(), result.rend(), [](char c) {return c != '0';});
    if (*it == '.') {
      result.erase(it.base() - 1, result.end());
    } else {
      result.erase(it.base(), result.end());
    }

  }
  return result;
}

int main(int argc, char *argv[])
{
    cout << numberToString(2) << endl;
    cout << numberToString(-22) << endl;

    /* Test case
    Describe(number_to_string_test)
    {
        It(should_return_true)
        {
            Assert::That(numberToString(2), Equals("2"));
            Assert::That(numberToString(-22), Equals("-22"));
        }
    };
    */

    return 0;
}
