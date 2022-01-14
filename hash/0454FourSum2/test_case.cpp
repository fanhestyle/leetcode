/*

int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
vector<int>& nums4)

Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
Output: 2
*/

//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

int main()
{
    Solution s;
    vector<int> nums1, nums2, nums3, nums4;
    int r, e;

    {
        nums1 = {1, 2};
        nums2 = {-2, -1};
        nums3 = {-1, 2};
        nums4 = {0, 2};
        e = 2;
        r = s.fourSumCount(nums1, nums2, nums3, nums4);
        assert(r == e);
    }

    {
        nums1 = {0};
        nums2 = {0};
        nums3 = {0};
        nums4 = {0};
        e = 1;
        r = s.fourSumCount(nums1, nums2, nums3, nums4);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}