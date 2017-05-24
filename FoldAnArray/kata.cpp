/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/24/2017
 * \class Kata
 *
 * \brief
 *
 *
 */
#include "kata.h"

#include <algorithm>

Kata::Kata()
{

}

std::vector<int> Kata::foldArray(std::vector<int> array, int runs)
{
    for (int i = 0; i < runs; ++i) {
        std::transform(array.cbegin(), array.cbegin() + array.size() / 2, array.crbegin(), array.begin(), std::plus<int>());
        array.resize((array.size() + 1)/ 2);
    }
    return array;
}
