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

    /* Test case
    void testequal(std::string ans, std::string sol) {
        Assert::That(ans, Equals(sol));
    }
    void dotest(const std::string &st, std::vector<int> &we, int n, std::string expected)
    {
        testequal(Rank::nthRank(st, we, n), expected);
    }

    Describe(nthRank_Tests)
    {
        It(Fixed_Tests)
        {
            std::string st = "Addison,Jayden,Sofia,Michael,Andrew,Lily,Benjamin";
            std::vector<int> we = {4, 2, 1, 4, 3, 1, 2};
            std::string sol = "Benjamin";
            dotest(st, we, 4, sol);

            st = "Elijah,Chloe,Elizabeth,Matthew,Natalie,Jayden";
            we = {1, 3, 5, 5, 3, 6};
            sol = "Matthew";
            dotest(st, we, 2, sol);
        }
    };
    */

    return 0;
}
