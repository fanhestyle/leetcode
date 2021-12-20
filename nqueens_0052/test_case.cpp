#include <bits/stdc++.h>
using namespace std;

/*
test-case

Input: n = 4
Output: 2
Explanation: There are two distinct solutions to the 4-queens puzzle as shown.

Example 2:
Input: n = 1
Output: 1


int totalNQueens(int n);

*/

#include "nqueens_1.hpp"

int main()
{
    Solution solution;
    int result, expected;
    int n;

    {
        n = 4;
        expected = 2;
        result = solution.totalNQueens(n);
        assert(expected == result);
    }

    {
        n = 1;
        expected = 1;
        result = solution.totalNQueens(n);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}