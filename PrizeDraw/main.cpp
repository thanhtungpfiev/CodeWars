/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/31/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

#include "rank.h"

using namespace std;

int main(int argc, char *argv[])
{
    std::string st = "Samantha,James,Noah,Elijah,Emily,Lily,David,Michael,Jayden,Madison,Joshua";
    std::vector<int> we = {2, 5, 4, 2, 2, 5, 2, 6, 5, 2, 6};
    cout << Rank::nthRank(st, we, 3) << endl;
    return 0;
}
