#include <bits/stdc++.h>
using namespace std;

/*

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]


Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.

vector<vector<int>> subsets(vector<int>& nums)
*/

#include "../testutils/twodarray_equal.hpp"
#include "subsets_1.hpp"

int main()
{
    Solution solution;
    vector<int> nums;
    vector<vector<int>> result, expected;

    {
        nums = {1, 2, 3};
        expected = {{}, {1}, {2}, {1, 2}, {3}, {1, 3}, {2, 3}, {1, 2, 3}};
        result = solution.subsets(nums);
        assert(isEqual(expected, result));
    }

    {
        nums = {0};
        expected = {{}, {0}};
        result = solution.subsets(nums);
        assert(isEqual(expected, result));
    }

    cout << "PASS!" << endl;
}