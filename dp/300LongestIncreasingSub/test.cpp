#include "s1.hpp"

// int lengthOfLIS(vector<int>& nums) {}
int main()
{
    Solution solution;
    vector<int> nums;
    int r, e;

    {
        nums = {10, 9, 2, 5, 3, 7, 101, 18};
        e = 4;
        r = solution.lengthOfLIS(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {0, 1, 0, 3, 2, 3};
        e = 4;
        r = solution.lengthOfLIS(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {7,7,7,7,7,7,7};
        e = 1;
        r = solution.lengthOfLIS(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {4,10,4,3,8,9};
        e = 3;
        r = solution.lengthOfLIS(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}