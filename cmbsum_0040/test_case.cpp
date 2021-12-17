#include <bits/stdc++.h>
using namespace std;

// test-case
/*

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output:
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output:
[
[1,2,2],
[5]
]


Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30

*/

#include "cmbsum_1.hpp"

bool isEqual(const vector<vector<int>>& lhs, const vector<vector<int>>& rhs)
{
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
    vector<vector<int>> result, expected;
    vector<int> candidates;
    int target;

    Solution solution;

    {
        candidates = {10, 1, 2, 7, 6, 1, 5};
        target = 8;
        expected = {{1, 1, 6}, {1, 2, 5}, {1, 7}, {2, 6}};
        result = solution.combinationSum2(candidates, target);
        assert(isEqual(expected, result));
    }

    {
        candidates = {2, 5, 2, 1, 2};
        target = 5;
        expected = {{1, 2, 2}, {5}};
        result = solution.combinationSum2(candidates, target);
        assert(isEqual(expected, result));
    }

    {
        candidates = {3, 1, 3, 5, 1, 1};
        target = 8;
        expected = {{1, 1, 1, 5}, {1, 1, 3, 3}, {3, 5}};
        result = solution.combinationSum2(candidates, target);
        assert(isEqual(expected, result));
    }

    cout << "PASS!" << endl;
}