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

#include <sstream>

SequenceSum::SequenceSum()
{

}

SequenceSum::SequenceSum(int c)
{
    count = c;
}

std::string SequenceSum::showSequence()
{
    std::stringstream ss;
    if (count == 0) {
        ss << std::to_string(count) << "=" << std::to_string(count);
        return ss.str();
    }
    if (count < 0) {
        ss << std::to_string(count) << "<0";
        return ss.str();
    }
    ss << "0";
    for (int i = 1; i <= count; i++) {
        ss << "+" << i;
    }
    ss << " = " << std::to_string(count * (count + 1) / 2);
    return ss.str();
}
