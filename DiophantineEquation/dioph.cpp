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
#include "dioph.h"

#include <cmath>

Dioph::Dioph()
{

}

std::vector<std::pair<long, long>> Dioph::analyseNumber(long long n)
{
    std::vector<std::pair<long, long>> result;
    for (long i = 1; i < sqrt(n); ++i) {
        if (n % i == 0) {
            result.push_back({i, n / i});
        }
    }
    return result;
}

std::vector<std::pair<long, long> > Dioph::solEquaStr(long long n)
{
    std::vector<std::pair<long, long>> result;
    std::vector<std::pair<long, long>> analizedNumbers = analyseNumber(n);

    for (unsigned int i = 0; i < analizedNumbers.size(); ++i) {
        std::pair<long, long> it = analizedNumbers.at(i);
        long a = it.first;
        long b = it.second;
        if ( ((a + b) % 2 == 0) && ((b - a) % 4 == 0) ) {
            result.push_back({(a + b) / 2, (b - a) / 4});
        }
    }

    return result;
}
