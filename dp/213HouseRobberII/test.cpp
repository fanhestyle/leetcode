#include "s1.hpp"

// int rob(vector<int>& nums)

int main()
{
    Solution solution;
    vector<int> nums;
    int r, e;

    {
        nums = {2, 3, 2};
        e = 3;
        r = solution.rob(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {1, 2, 3, 1};
        e = 4;
        r = solution.rob(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }
    {
        nums = {1, 2, 1, 1};
        e = 3;
        r = solution.rob(nums);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {1,2,3};
        e = 3;
        r = solution.rob(nums);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}