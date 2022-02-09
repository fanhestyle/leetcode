#include "s1.hpp"

// vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

int main()
{
    Solution solution;
    vector<int> nums1, nums2, r, e;

    {
        nums1 = {4, 1, 2};
        nums2 = {1, 3, 4, 2};
        e = {-1, 3, -1};
        r = solution.nextGreaterElement(nums1, nums2);
        ASSERT_EX(isArrayEqual<int>(r, e),
                  ;); // cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums1 = {2, 4};
        nums2 = {1, 2, 3, 4};
        e = {3, -1};
        r = solution.nextGreaterElement(nums1, nums2);
        ASSERT_EX(isArrayEqual<int>(r, e),
                  ;); //, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}