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
#ifndef KATA_H
#define KATA_H

#include <vector>

class Kata
{
public:
    Kata();
public:
    std::vector<int> foldArray(std::vector<int> array, int runs);
    std::vector<int> foldArrayOneTime(std::vector<int> array);
};

#endif // KATA_H
