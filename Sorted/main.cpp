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

using namespace std;

std::string is_sorted_and_how(std::vector<int> array)
{
    std::string result;
    if (array.size() == 2) {
      if (array.at(0) > array.at(1)) {
        result = "yes, descending";
      } else {
        result = "yes, ascending";
      }
    }
    bool isSorted = true;
    bool isAscending = true;
    if (array.size() > 2) {
      if (array.at(0) < array.at(1)) {
        isAscending = true;
      } else {
        isAscending = false;
      }
      if (isAscending == true) {
        for (unsigned int i = 1; i < array.size() - 1; ++i) {
          if (array.at(i) > array.at(i + 1))  {
            isSorted = false;
            break;
          }
        }
      } else {
        for (unsigned int i = 1; i < array.size() - 1; ++i) {
          if (array.at(i) < array.at(i + 1)) {
            isSorted = false;
            break;
          }
        }
      }
    }
    if (isSorted == false) {
      result = "no";
    } else {
      if (isAscending == true) {
        result = "yes, ascending";
      } else {
        result = "yes, descending";
      }
    }
    return result;
}

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
