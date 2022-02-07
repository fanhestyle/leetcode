#include "s1.hpp"

// int findLengthOfLCIS(vector<int>& nums) {

int main()
{
    Solution solution;

    vector<int> nums;
    int r, e;

    {
        nums = {1, 3, 5, 4, 7};
        e = 3;
        r = solution.findLengthOfLCIS(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }
    {
        nums = {2, 2, 2, 2, 2};
        e = 1;
        r = solution.findLengthOfLCIS(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}