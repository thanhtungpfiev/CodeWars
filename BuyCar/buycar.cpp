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
#include "buycar.h"

#include <iostream>

using namespace std;

BuyCar::BuyCar()
{

}

std::vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
{
    std::vector<int> result;
    int month = 0;
    double startPriceOldDouble = startPriceOld;
    double startPriceNewDouble = startPriceNew;
    int savings = 0;
    percentLossByMonth = percentLossByMonth / 100;
    while ((startPriceOldDouble  + savings) - startPriceNewDouble < 0) {
      startPriceOldDouble = startPriceOldDouble - startPriceOldDouble * percentLossByMonth;
      startPriceNewDouble = startPriceNewDouble - startPriceNewDouble * percentLossByMonth;
      savings += savingperMonth;
      if (month % 2 == 0) {
        percentLossByMonth += 0.005;
      }
      ++month;
    }
    result.push_back(month);
    result.push_back(int(startPriceOldDouble + savings - startPriceNewDouble + 0.5));
    cout << result.at(0) << " " << result.at(1) << endl;
    return result;
}
