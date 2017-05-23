/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 21 - 5 - 2017
 *
 * \class SumOfDivided
 *
 * \brief
 *
 *
 */
#include "sumofdivided.h"

#include <iostream>
#include <map>

SumOfDivided::SumOfDivided()
{

}

std::string SumOfDivided::sumOfDivided(std::vector<int> &lst)
{
    std::string result;
    std::map<int, int> mapPrimeSum;
    for (int i = 0; i < lst.size(); ++i) {
        std::set<int> factorizes = factorizeNumber(abs(lst.at(i)));
        for (std::set<int>::const_iterator iter = factorizes.begin(); iter != factorizes.end(); ++iter) {
            if (mapPrimeSum.find(*iter) != mapPrimeSum.end()) {
                mapPrimeSum.find(*iter)->second += lst.at(i);
            } else {
                mapPrimeSum.insert(std::pair<int, int>(*iter, lst.at(i)));
            }
        }
    }
    for (std::map<int, int>::const_iterator iter = mapPrimeSum.begin(); iter != mapPrimeSum.end(); ++iter) {
        result += "(" + std::to_string(iter->first) + " " + std::to_string(iter->second) + ")";
    }
    return result;
}

std::set<int> SumOfDivided::factorizeNumber(int number)
{
    std::set<int> factorizes;
    int z = 2;
    while (z * z <= number) {
        if (number % z == 0) {
            factorizes.insert(z);
            number /= z;
        } else {
            z++;
        }
    }
    if (number > 1) {
        factorizes.insert(number);
    }
    return factorizes;
}
