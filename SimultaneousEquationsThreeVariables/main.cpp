/**
 * \author tungdt9 thanhtungpfiev@gmail.com
 *
 * \date 6/3/2017
 * \class %{Cpp:License:ClassName}
 *
 * \brief
 *
 *
 */
#include <iostream>

using namespace std;

int determinant(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    return a*e*i + b*f*g + c*d*h - c*e*g - b*d*i - a*f*h;
}

int* solveEq(int eq[3][4])
{
  int* result = new int[3];
  int denominator = determinant(eq[0][0], eq[0][1], eq[0][2], eq[1][0], eq[1][1], eq[1][2], eq[2][0], eq[2][1], eq[2][2]);
  int numerator1 = determinant(eq[0][3], eq[0][1], eq[0][2], eq[1][3], eq[1][1], eq[1][2], eq[2][3], eq[2][1], eq[2][2]);
  int numerator2 = determinant(eq[0][0], eq[0][3], eq[0][2], eq[1][0], eq[1][3], eq[1][2], eq[2][0], eq[2][3], eq[2][2]);
  int numerator3 = determinant(eq[0][0], eq[0][1], eq[0][3], eq[1][0], eq[1][1], eq[1][3], eq[2][0], eq[2][1], eq[2][3]);

  result[0] = numerator1 / denominator;
  result[1] = numerator2 / denominator;
  result[2] = numerator3 / denominator;
  return result;
}

int main(int argc, char *argv[])
{
    int eq1[3][4] = {{4, 2, -5, -21}, {2, -2, 1, 7}, {4, 3, -1, -1}};
    int* results = solveEq(eq1);
    for (int i = 0; i < 3; ++i) {
        cout << results[i] << " ";
    }
    cout << endl;

    /* Test case
    int eq1[3][4] = {{4, -3, 1, -10}, {2, 1, 3, 0}, {-1, 2, -5, 17}};
    int* results = solveEq(eq1);
    vector<int> expected1 = {1, 4, -2};
    vector<int> result1(results, 1 + results + sizeof results / sizeof results[0]);
    Assert::That(result1, EqualsContainer(expected1));

    int eq2[3][4] = {{2, 1, 3, 10}, {-3, -2, 7, 5}, {3, 3, -4, 7}};
    results = solveEq(eq2);
    vector<int> expected2 = {-1, 6, 2};
    vector<int> result2(results, 1 + results + sizeof results / sizeof results[0]);
    Assert::That(result2, EqualsContainer(expected2));

    int eq3[3][4] = {{4, 2, -5, -21}, {2, -2, 1, 7}, {4, 3, -1, -1}};
    results = solveEq(eq3);
    vector<int> expected3 = {1, 0, 5};
    vector<int> result3(results, 1 + results + sizeof results / sizeof results[0]);
    Assert::That(result3, EqualsContainer(expected3));
    */

    return 0;
}
