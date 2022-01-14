/*
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
vector<int> maxSlidingWindow(vector<int>& nums, int k)
*/
#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

int main()
{
    Solution s;
    vector<int> nums;
    int k;
    vector<int> r, e;

    {
        nums = {1, 3, -1, -3, 5, 3, 6, 7};
        k = 3;
        e = {3, 3, 5, 5, 6, 7};
        r = s.maxSlidingWindow(nums, k);
        assert(isArrayEqual<int>(r, e));
    }

    {
        nums = {1};
        k = 1;
        e = {1};
        r = s.maxSlidingWindow(nums, k);
        assert(isArrayEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}