#include <bits/stdc++.h>
using namespace std;

/* test-case

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]


Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.
vector<vector<int>> permute(vector<int>& nums)
*/

#include "permutation_1.hpp"
//#include "permutation_2_web.hpp"

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
        nums = {1, 2, 3};
        expected = {{1, 2, 3}, {1, 3, 2}, {2, 1, 3},
                    {2, 3, 1}, {3, 1, 2}, {3, 2, 1}};
        result = solution.permute(nums);
        assert(is_equal(expected, result));
    }

    {
        nums = {0, 1};
        expected = {{0, 1}, {1, 0}};
        result = solution.permute(nums);
        assert(is_equal(expected, result));
    }

    {
        nums = {1};
        expected = {{1}};
        result = solution.permute(nums);
        assert(is_equal(expected, result));
    }

    cout << "PASS!" << endl;
}