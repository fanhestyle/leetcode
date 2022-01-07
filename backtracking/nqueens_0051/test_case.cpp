#include <bits/stdc++.h>
using namespace std;

/*
test-case

test-case1:
Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]

test-case2:
Input: n = 1
Output: [["Q"]]

vector<vector<string>> solveNQueens(int n)

*/

#include "nqueens_1.hpp"

bool is_equal(const vector<vector<string>>& lhs,
              const vector<vector<string>>& rhs)
{
    if (lhs.size() != rhs.size())
        return false;
    for (int i = 0; i < lhs.size(); i++)
    {
        for (int j = 0; j < lhs.at(i).size(); j++)
        {
            if (lhs.at(i).at(j) != rhs.at(i).at(j))
                return false;
        }
    }
    return true;
}

int main()
{
    Solution solution;
    vector<vector<string>> result, expected;
    int n;

    {
        n = 4;
        expected = {{".Q..", "...Q", "Q...", "..Q."},
                    {"..Q.", "Q...", "...Q", ".Q.."}};
        result = solution.solveNQueens(n);
        assert(is_equal(expected, result));
    }

    {
        n = 1;
        expected = {{"Q"}};
        result = solution.solveNQueens(n);
        assert(is_equal(expected, result));
    }

    cout << "PASS!" << endl;
}