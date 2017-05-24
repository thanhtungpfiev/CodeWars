#include <iostream>

#include "sequencesum.h"

using namespace std;

int main(int argc, char *argv[])
{
    SequenceSum s1(-15);
    cout << s1.showSequence() << endl;
    SequenceSum s2(0);
    cout << s2.showSequence() << endl;
    SequenceSum s3(6);
    cout << s3.showSequence() << endl;
    return 0;
}
