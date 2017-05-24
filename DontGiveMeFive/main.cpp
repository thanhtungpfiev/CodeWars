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

using namespace std;

int dontGiveMeFive(int start, int end)
{
  int count = 0;
  for (int i = start; i <= end; ++i) {
    std::string s = std::to_string(i);
    std::size_t found = s.find("5");
    if (found == std::string::npos) {
      count++;
    }
  }
  return count;
}

int main(int argc, char *argv[])
{
    cout << dontGiveMeFive(1, 10) << endl;
    return 0;
}
