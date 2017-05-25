/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 19 - 5 - 2017
 *
 * \class Negabinary
 *
 * \brief
 *
 *
 */
#include "negabinary.h"

#include <iostream>
#include <vector>

Negabinary::Negabinary()
{

}

std::string Negabinary::ToNegabinary(int val)
{
    std::string result;
    std::vector<int> remainders;

    if (val == 0) {
        return "0";
    }

    while (val != 0)
    {
        int remainder = val % -2;
        val = val / -2;

        if (remainder < 0)
        {
            remainder += 2;
            val += 1;
        }
        remainders.push_back(remainder);
    }
    for (int i = remainders.size() - 1; i >=0; i--) {
        result += std::to_string(remainders.at(i));
    }
    return result;
}

int Negabinary::ToInt(std::string s)
{
    std::vector<int> atoms;
    for (int i = s.length() - 1; i >= 0; i--) {
        atoms.push_back(s.at(i) - '0');
    }
    int result = 0;
    for (int i = atoms.size() - 1; i >= 0; i--) {
        result = result * (-2) + atoms.at(i);
    }
    return result;
}
