/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/31/2017
 * \class Rank
 *
 * \brief
 *
 *
 */
#include "rank.h"

#include <algorithm>
#include <iostream>
#include <sstream>

Rank::Rank()
{

}

std::string Rank::nthRank(const std::string &st, std::vector<int> &we, int n)
{
    std::string result;
    std::vector<std::string> listString = splitGen(st, ',');
    if (!listString.size()) {
        result = "No participants";
    } else if (listString.size() < (unsigned int)n) {
        result = "Not enough participants";
    } else {
        std::vector<std::pair<int, std::string>> v;
        for (unsigned int i = 0; i < listString.size(); ++i) {
            int number = listString[i].length();
            for (const auto &c : listString[i]) {
                number += toupper(c) - 64;
            }
            v.emplace_back(-number * we[i], listString[i]);
        }
        std::nth_element(v.begin(), v.begin() + n - 1, v.end());
        result = v[n - 1].second;
    }
    return result;
}

std::vector<std::string> Rank::splitGen(const std::string &s, char delim)
{
    std::vector<std::string> out;
    std::istringstream ss(s);
    std::string next;
    while (std::getline(ss, next, delim)) {
        out.push_back(next);
    }
    return out;
}
