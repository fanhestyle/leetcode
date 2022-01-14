/*

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

vector<vector<int>> fourSum(vector<int>& nums, int target)
*/

#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

int main()
{
    Solution s;
    vector<int> nums;
    int target;
    vector<vector<int>> r, e;

    {
        target = 0;
        nums = {1, 0, -1, 0, -2, 2};
        e = {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
        r = s.fourSum(nums, target);
        assert(isEqual<int>(r, e, true));
    }

    {
        target = 8;
        nums = {2, 2, 2, 2, 2};
        e = {{2, 2, 2, 2}};
        r = s.fourSum(nums, target);
        assert(isEqual<int>(r, e, true));
    }

    {
        target = -11;
        nums = {1, -2, -5, -4, -3, 3, 3, 5};
        e = {{-5, -4, -3, 1}};
        r = s.fourSum(nums, target);
        assert(isEqual<int>(r, e, true));
    }

    cout << "PASS!" << endl;
}
