#include "s1.hpp"

// int combinationSum4(vector<int>& nums, int target) {

int main()
{
    Solution solution;
    vector<int> nums;
    int target;
    int r, e;

    {
        nums = {1, 2, 3};
        target = 4;
        e = 7;
        r = solution.combinationSum4(nums, target);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {9};
        target = 3;
        e = 0;
        r = solution.combinationSum4(nums, target);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}