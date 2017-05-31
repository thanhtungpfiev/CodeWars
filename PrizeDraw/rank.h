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
#ifndef RANK_H
#define RANK_H

#include <map>
#include <string>
#include <vector>

class Rank
{
public:
    Rank();

public:
    static std::string nthRank(const std::string &st, std::vector<int> &we, int n);

private:
    static std::vector<std::string> splitGen(const std::string &s, char delim);

};

#endif // RANK_H
