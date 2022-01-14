/*

vector<vector<int>> threeSum(vector<int>& nums)

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

Input: nums = []
Output: []

Input: nums = [0]
Output: []
*/

#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"

int main()
{
    Solution s;
    vector<int> nums;
    vector<vector<int>> r, e;

    {
        nums = {-1, 0, 1, 2, -1, -4};
        e = {{-1, 0, 1}, {-1, -1, 2}};
        r = s.threeSum(nums);
        assert(isEqual<int>(r, e,true));
    }

    {
        nums = {3, 0, -2, -1, 1, 2};
        e = {{-2, -1, 3}, {-2, 0, 2}, {-1, 0, 1}};
        r = s.threeSum(nums);
        assert(isEqual<int>(r, e,true));
    }

    {
        nums = {0, 0, 0};
        e = {{0, 0, 0}};
        r = s.threeSum(nums);
        assert(isEqual<int>(r, e));
    }

    {
        nums = {1, -1, -1, 0};
        e = {{-1, 0, 1}};
        r = s.threeSum(nums);
        assert(isEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}