/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/5/2017
 * \class Dioph
 *
 * \brief
 *
 *
 */
#ifndef DIOPH_H
#define DIOPH_H

#include <vector>
#include <utility>

class Dioph
{
public:
    Dioph();

public:
    static std::vector<std::pair <long, long>> solEquaStr(long long n);
private:
    static std::vector<std::pair<long, long>> analyseNumber(long long n);
};

#endif // DIOPH_H
