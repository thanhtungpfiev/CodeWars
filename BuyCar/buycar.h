/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 9 - 5 - 2017
 *
 * \class BuyCar
 *
 * \brief
 *
 *
 */
#ifndef BUYCAR_H
#define BUYCAR_H

#include <vector>

class BuyCar
{
public:
    BuyCar();

public:
  static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth);
};

#endif // BUYCAR_H
