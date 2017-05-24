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
#ifndef SEQUENCESUM_H
#define SEQUENCESUM_H

#include <string>

class SequenceSum
{
public:
    SequenceSum();
    SequenceSum (int);

public:
    std::string showSequence();

private:
    int count;
};

#endif // SEQUENCESUM_H
