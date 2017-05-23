/**
 * \author thanhtung thanhtungpfiev@gmail.com
 *
 * \date 19 - 5 - 2017
 *
 * \class Negabinary
 *
 * \brief
 *
 *
 */
#ifndef NEGABINARY_H
#define NEGABINARY_H

#include <string>

class Negabinary
{
public:
    Negabinary();

public:
  static std::string ToNegabinary(int val);
  static int ToInt(std::string s);
};

#endif // NEGABINARY_H
