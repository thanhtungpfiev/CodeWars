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

ASum::ASum()
{

}

long long ASum::findNb(long long m)
{
    long long n = 1;
    long long sum = 0;
    while (sum < m) {
        sum += n * n * n;
        ++n;
    }
    return (sum == m ? --n : -1);
}
