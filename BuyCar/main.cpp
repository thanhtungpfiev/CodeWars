/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 9 - 5 - 2017
 *
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

#include "buycar.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    BuyCar::nbMonths(2000, 8000, 1000, 1.5);

    /* Test case
    using namespace std;

    Describe(BuycarTest)
    {
        It(test1)
        {
          static const int r1[] = { 6, 766 };
          vector<int> s (r1, r1 + sizeof(r1) / sizeof(r1[0]));
          vector<int> ans1 = BuyCar::nbMonths(2000, 8000, 1000, 1.5);
          Assert::That(ans1, Equals(s));
        }
        It(test2)
        {
          static const int r1[] = { 0, 4000 };
          vector<int> s (r1, r1 + sizeof(r1) / sizeof(r1[0]));
          vector<int> ans1 = BuyCar::nbMonths(12000, 8000, 1000, 1.5);
          Assert::That(ans1, Equals(s));
        }
    };
    */

    return 0;
}
