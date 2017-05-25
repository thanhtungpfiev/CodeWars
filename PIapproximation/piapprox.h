/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 5/25/2017
 * \class PiApprox
 *
 * \brief
 *
 *
 */
#ifndef PIAPPROX_H
#define PIAPPROX_H


#include <cmath>
#include <iomanip>

#define M_PI 3.14159265358979323846  /* pi */

using namespace std;

class PiApprox
{
public:
    PiApprox();
public:
    static string iterPi(double epsilon);
};


#endif // PIAPPROX_H
