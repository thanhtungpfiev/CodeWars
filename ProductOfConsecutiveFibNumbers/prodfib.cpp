/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/25/2017
 * \class ProdFib
 *
 * \brief
 *
 *
 */
#include "prodfib.h"

ProdFib::ProdFib()
{

}

std::vector<ull> ProdFib::productFib(ull prod)
{
    ull a = 0, b = 1;
    while (a * b < prod) {
        std::swap(a, b);
        b += a;
    }
    return {a, b, ((a*b == prod) ? true : false)};
}
