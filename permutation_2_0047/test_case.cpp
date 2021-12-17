#include <bits/stdc++.h>
using namespace std;

/*
Example 1:

Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]
Example 2:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]


Constraints:

1 <= nums.length <= 8
-10 <= nums[i] <= 10
*/

#include "perm_1.hpp"

bool is_equal(const vector<vector<int>>& lhs, const vector<vector<int>>& rhs)
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
    vector<int> nums;
    Solution solution;

    {
        nums = {1, 1, 2};
        expected = {{1, 1, 2}, {1, 2, 1}, {2, 1, 1}};
        result = solution.permuteUnique(nums);
        assert(is_equal(expected, result));
    }

    {
        nums = {1, 2, 3};
        expected = {{1, 2, 3}, {1, 3, 2}, {2, 1, 3},
                    {2, 3, 1}, {3, 1, 2}, {3, 2, 1}};
        result = solution.permuteUnique(nums);
        assert(is_equal(expected, result));
    }

    {
        nums = {3, 3, 0, 3};
        expected = {{0, 3, 3, 3}, {3, 0, 3, 3}, {3, 3, 0, 3}, {3, 3, 3, 0}};
        result = solution.permuteUnique(nums);
        assert(is_equal(expected, result));
    }

    cout << "PASS!" << endl;
}
