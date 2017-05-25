/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/25/2017
 * \class BankerPlan
 *
 * \brief
 *
 *
 */
#include "bankerplan.h"

BankerPlan::BankerPlan()
{

}

bool BankerPlan::fortune(int f0, double p, int c0, int n, double i)
{
    p = p / 100;
    i = i / 100;
    for (int j = 0; j < n; ++j) {
      if (f0 < 0) {
        return false;
      }
      f0 = f0 + f0 * p - c0;
      c0 = c0 + c0 * i;
    }
    return true;
}
