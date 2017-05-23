/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 23 - 5 - 2017
 *
 * \class BigIntegerUtil
 *
 * \brief
 *
 *
 */
#ifndef BIGINTEGERUTIL_H
#define BIGINTEGERUTIL_H

#include <vector>

class BigIntegerUtil
{
public:
    BigIntegerUtil();

public:
    static std::vector<int> convertNumberToElements(int number);
    static std::vector<int> add(std::vector<int> &v1, std::vector<int> &v2);
};

#endif // BIGINTEGERUTIL_H
