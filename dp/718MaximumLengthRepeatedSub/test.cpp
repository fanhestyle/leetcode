#include "s1.hpp"

// int findLength(vector<int>& nums1, vector<int>& nums2) {

int main()
{
    Solution solution;
    vector<int> nums1, nums2;
    int r, e;

    {
        nums1 = {1, 2, 3, 2, 1};
        nums2 = {3, 2, 1, 4, 7};
        e = 3;
        r = solution.findLength(nums1, nums2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums1 = {0, 0, 0, 0, 0};
        nums2 = {0, 0, 0, 0, 0};
        e = 5;
        r = solution.findLength(nums1, nums2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}