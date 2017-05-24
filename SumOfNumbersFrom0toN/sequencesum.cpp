/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/24/2017
 * \class SequenceSum
 *
 * \brief
 *
 *
 */
#include "sequencesum.h"

SequenceSum::SequenceSum()
{

}

SequenceSum::SequenceSum(int c)
{
    count = c;
}

std::string SequenceSum::showSequence()
{
    int sum = 0;
    std::string result;
    if (count == 0) {
        result = std::to_string(count) + "=" + std::to_string(count);
        return result;
    }
    if (count < 0) {
        result = std::to_string(count) + "<0";
        return result;
    }
    for (int i = 0; i <= count; i++) {
        sum += i;
        if (i == count) {
            result += std::to_string(i);
        } else {
            result += std::to_string(i) + "+";
        }
    }
    result += " = ";
    result += std::to_string(sum);
    return result;
}
