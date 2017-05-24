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

Kata::Kata()
{

}

std::vector<int> Kata::foldArray(std::vector<int> array, int runs)
{
    for (int i = 0; i < runs; ++i) {
        array = foldArrayOneTime(array);
    }
    return array;
}

std::vector<int> Kata::foldArrayOneTime(std::vector<int> array)
{
    if (array.size() == 1) {
        return array;
    }
    std::vector<int> result;
    if (array.size() % 2 == 0) {
        for (unsigned int j = 0; j < array.size() / 2; ++j) {
            result.push_back(array.at(j) + array.at(array.size() - 1 - j));
        }
    } else {
        for (unsigned int j = 0;  j < array.size() / 2; ++j) {
            result.push_back(array.at(j) + array.at(array.size() - 1 - j));
        }
        result.push_back(array.at(array.size() / 2));
    }
    return result;
}
