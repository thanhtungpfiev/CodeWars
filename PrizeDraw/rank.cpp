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

std::map<char, int> Rank::dictionary;

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
        genDictionary();
        std::vector<std::pair<int, std::string>> v;
        for (unsigned int i = 0; i < listString.size(); ++i) {
            number(listString[i]);
            v.emplace_back(-(number(listString[i]) * we[i]), listString[i]);
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

void Rank::genDictionary()
{
    int n = 1;
    for (char c = 'a'; c <= 'z'; c++) {
        dictionary.insert(std::pair<char,int>(c, n++));
    }
    n = 1;
    for (char c = 'A'; c <= 'Z'; c++) {
        dictionary.insert(std::pair<char,int>(c, n++));
    }
}

int Rank::number(const std::string &s)
{
    int n = s.length();
    for (const auto &c : s) {
        n += dictionary[c];
    }
    return n;
}
