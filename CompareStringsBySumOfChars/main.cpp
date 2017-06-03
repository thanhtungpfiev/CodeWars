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
#include <algorithm>

using namespace std;

long totalCharString(const std::string &str)
{
  long sum = 0;
  for (const auto &c : str) {
      if (std::isalpha(c)) {
          sum += int(std::toupper(c));
      } else {
          sum = 0;
          break;
      }
  }
  return sum;
}

bool compare(std::string s1, std::string s2)
{
    return totalCharString(s1) == totalCharString(s2);
}

int main(int argc, char *argv[])
{
    cout << compare("gf", "FG") << endl;

    /* Test case
    Describe(Tests)
    {
        It(ExampleTests)
        {
            Assert::That(compare("AD", "BC"), Equals(true));
        }
    };
    */

    return 0;
}
