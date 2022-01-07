/*
Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]


Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]


Example 3:
Input: nums = [], target = 0
Output: [-1,-1]

vector<int> searchRange(vector<int>& nums, int target)
*/

#include "../../testutils/twodarray_equal.hpp"
#include "find_f_l_1.hpp"
//#include "find_f_l_2.hpp"


int main()
{
    Solution solution;
    vector<int> nums;
    int target;
    vector<int> result;
    vector<int> expected;

    {
        nums = {5, 7, 7, 8, 8, 10};
        target = 8;
        expected = {3, 4};
        result = solution.searchRange(nums, target);
        assert(isArrayEqual<int>(result, expected));
    }

    {
        nums = {5, 7, 7, 8, 8, 10};
        target = 6;
        expected = {-1, -1};
        result = solution.searchRange(nums, target);
        assert(isArrayEqual<int>(result, expected));
    }

    {
        nums = {};
        target = 0;
        expected = {-1, -1};
        result = solution.searchRange(nums, target);
        assert(isArrayEqual<int>(result, expected));
    }

    {
        nums = {1};
        target = 1;
        expected = {0, 0};
        result = solution.searchRange(nums, target);
        assert(isArrayEqual<int>(result, expected));
    }

    cout << "PASS!" << endl;
}