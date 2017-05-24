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

void uppercaseString(std::string &str)
{
  std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

bool checkContainNonAlpha(const std::string &str)
{
  return std::find_if(str.begin(), str.end(), [](char c) { return !std::isalpha(c); }) != str.end();
}

long totalCharString(const std::string &str)
{
  long sum = 0;
  for (unsigned int i = 0; i < str.size(); ++i) {
    sum += int(str.at(i));
  }
  return sum;
}

bool compare(std::string s1, std::string s2)
{
    uppercaseString(s1);
    uppercaseString(s2);
    if (s1.empty() || checkContainNonAlpha(s1)) {
      s1 = "";
    }
    if (s2.empty() || checkContainNonAlpha(s2)) {
      s2 = "";
    }
    if (!s1.compare(s2)) {
      return true;
    }
    return totalCharString(s1) == totalCharString(s2) ? true : false;
}

int main(int argc, char *argv[])
{
    cout << compare("AD", "BC") << endl;
    return 0;
}
