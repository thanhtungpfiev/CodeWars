/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/25/2017
 * \class ASum
 *
 * \brief
 *
 *
 */
#include "asum.h"

#include <cmath>

ASum::ASum()
{

}

long long ASum::findNb(long long m)
{
    long long sumN = std::sqrt(m);
    if ((sumN * sumN) != m) {
        return -1;
    }
    return (std::sqrt(8 * sumN + 1) - 1) / 2;
}
