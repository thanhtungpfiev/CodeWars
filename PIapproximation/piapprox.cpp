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
#include "piapprox.h"

#include <sstream>

PiApprox::PiApprox()
{

}

string PiApprox::iterPi(double epsilon)
{
    double pi = 0;
    int i = 0;
    do {
        if (i % 2 == 0) {
            pi = pi + 1.0 / (2 * i + 1);
        } else {
            pi = pi - 1.0 / (2 * i + 1);
        }
        ++i;
    } while (abs(4 * pi - M_PI) > epsilon);
    stringstream stream;
    stream << "[" << i << ", " << fixed << setprecision(10) << 4 * pi << "]";
    return stream.str();
}
