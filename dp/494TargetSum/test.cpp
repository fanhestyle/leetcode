//#include "s1.hpp"
#include "s2.hpp"

// int findTargetSumWays(vector<int>& nums, int target) {}

int main()
{
    Solution solution;
    vector<int> nums;
    int target;
    int r, e;

    {
        nums = {1,1,1,1,1};
        target = 3;
        e = 5;
        r = solution.findTargetSumWays(nums, target);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }
    {
        nums = {1};
        target = 1;
        e = 1;
        r = solution.findTargetSumWays(nums, target);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}