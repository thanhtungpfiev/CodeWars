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
#include "bigintegerutil.h"

#include <string>

BigIntegerUtil::BigIntegerUtil()
{

}

std::vector<int> BigIntegerUtil::convertNumberToElements(int number)
{
    std::vector<int> result;
    std::string numberString = std::to_string(number);
    for (const auto &c : numberString) {
        result.push_back(c - '0');
    }
    return result;
}

std::vector<int> BigIntegerUtil::add(std::vector<int> &v1, std::vector<int> &v2)
{

}
