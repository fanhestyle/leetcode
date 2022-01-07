#include <bits/stdc++.h>
using namespace std;

/*
test-case

Example 1:

Input: n = 4, k = 2
Output:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
Example 2:

Input: n = 1, k = 1
Output: [[1]]


Constraints:

1 <= n <= 20
1 <= k <= n

vector<vector<int>> combine(int n, int k)
*/

#include "comb_1.hpp"

bool isArrayEqual(vector<int>& lhs, vector<int>& rhs)
{
    sort(lhs.begin(), lhs.end());
    sort(rhs.begin(), rhs.end());
    if (lhs.size() != rhs.size())
        return false;
    for (int i = 0; i < lhs.size(); i++)
        if (lhs.at(i) != rhs.at(i))
            return false;
    return true;
}

bool contains(vector<vector<int>>& vec, vector<int>& item)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (isArrayEqual(vec.at(i), item))
            return true;
    }
    return false;
}

bool isEqual(vector<vector<int>>& lhs, vector<vector<int>>& rhs)
{
    if (lhs.size() != rhs.size())
        return false;

    for (int j = 0; j < rhs.size(); j++)
    {
        if (!contains(lhs, rhs.at(j)))
            return false;
    }

    for (int i = 0; i < lhs.size(); i++)
    {
        if (!contains(rhs, lhs.at(i)))
            return false;
    }

    return true;
}

int main()
{
    Solution solution;
    int n, k;
    vector<vector<int>> expected, result;

    {
        n = 4;
        k = 2;
        result = solution.combine(n, k);
        expected = {
            {2, 4}, {3, 4}, {2, 3}, {1, 2}, {1, 3}, {1, 4},
        };
        assert(isEqual(expected, result));
    }

    {
        n = 1;
        k = 1;
        result = solution.combine(n, k);
        expected = {{1}};
        assert(isEqual(expected, result));
    }

    cout << "PASS!" << endl;
}