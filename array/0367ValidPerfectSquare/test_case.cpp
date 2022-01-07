/*
Example 1:
Input: num = 16
Output: true

Example 2:
Input: num = 14
Output: false

bool isPerfectSquare(int num)
*/

#include "s1.hpp"

int main()
{
    Solution solution;
    bool expected, result;
    int num;

    {
        num = 16;
        expected = true;
        result = solution.isPerfectSquare(num);
        assert(expected==result);
    }

    {
        num = 14;
        expected = false;
        result = solution.isPerfectSquare(num);
        assert(expected==result);
    }


    cout << "PASS!" << endl;

}