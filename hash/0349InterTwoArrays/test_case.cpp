/*

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
*/

#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

int main()
{
    Solution s;
    vector<int> r, e, nums1, nums2;

    {
        nums1 = {1, 2, 2, 1};
        nums2 = {2, 2};
        e = {2};
        r = s.intersection(nums1, nums2);
        assert(isArrayEqual<int>(e, r, true));
    }

    {
        nums1 = {4, 9, 5};
        nums2 = {9, 4, 9, 8, 4};
        e = {9, 4};
        r = s.intersection(nums1, nums2);
        assert(isArrayEqual<int>(e, r, true));
    }

    cout << "PASS!" << endl;
}