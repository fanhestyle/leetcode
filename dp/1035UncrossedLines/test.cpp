#include "s1.hpp"

// int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {

int main()
{
    Solution solution;

    vector<int> nums1, nums2;
    int r, e;

    {
        nums1 = {2, 5, 1, 2, 5};
        nums2 = {10, 5, 2, 1, 5, 2};
        e = 3;
        r = solution.maxUncrossedLines(nums1, nums2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums1 = {2, 5, 1, 2, 5, 6};
        nums2 = {10, 5, 2, 1, 5, 6, 2};
        e = 4;
        r = solution.maxUncrossedLines(nums1, nums2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums1 = {1, 3, 7, 1, 7, 5};
        nums2 = {1, 9, 2, 5, 1};
        e = 2;
        r = solution.maxUncrossedLines(nums1, nums2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums1 = {2, 6, 8, 1, 9};
        nums2 = {3, 7, 6, 1, 2};
        e = 2;
        r = solution.maxUncrossedLines(nums1, nums2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}