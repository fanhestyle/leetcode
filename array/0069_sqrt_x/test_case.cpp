/*
Example 1:
Input: x = 4
Output: 2

Example 2:
Input: x = 8
Output: 2

Explanation: The square root of 8 is 2.82842...,
and since the decimal part is truncated, 2 is returned.

int mySqrt(int x)
*/

#include "sqrt_1.hpp"
//#include "sqrt_newton_2.hpp"


int main()
{
    Solution solution;
    int x;
    int result, expected;

    {
        x = 4;
        expected = 2;
        result = solution.mySqrt(x);
        assert(result == expected);
    }

    {
        x = 8;
        expected = 2;
        result = solution.mySqrt(x);
        assert(result == expected);
    }

    {
        x = 5;
        expected = 2;
        result = solution.mySqrt(x);
        assert(result == expected);
    }

    cout << "PASS!" << endl;
}