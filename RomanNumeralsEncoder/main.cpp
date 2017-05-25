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

using namespace std;

#include <vector>
string solution(int number){
  // convert the number to a roman numeral
  typedef std::pair<int, string> NumberRomanNumeral;
  typedef std::vector<NumberRomanNumeral> NumberRomanNumerals;
  NumberRomanNumerals numberRomanNumerals;
  numberRomanNumerals.emplace_back(1000, "M");
  numberRomanNumerals.emplace_back(900, "CM");
  numberRomanNumerals.emplace_back(500, "D");
  numberRomanNumerals.emplace_back(400, "CD");
  numberRomanNumerals.emplace_back(100, "C");
  numberRomanNumerals.emplace_back(90, "XC");
  numberRomanNumerals.emplace_back(50, "L");
  numberRomanNumerals.emplace_back(40, "XL");
  numberRomanNumerals.emplace_back(10, "X");
  numberRomanNumerals.emplace_back(9, "IX");
  numberRomanNumerals.emplace_back(5, "V");
  numberRomanNumerals.emplace_back(4, "IV");
  numberRomanNumerals.emplace_back(1, "I");

  string result;
  for (auto &i : numberRomanNumerals) {
    while (number >= i.first) {
      number -= i.first;
      result += i.second;
    }
  }
  return result;
}

int main(int argc, char *argv[])
{
    cout << solution(182) << endl;
    cout << solution(1990) << endl;
    cout << solution(1875) << endl;
    return 0;
}
