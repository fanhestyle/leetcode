#include "s1.hpp"

// int maxSubArray(vector<int>& nums)

int main()
{
    Solution s;
    vector<int> nums;
    int r, e;

    {
        nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        e = 6;
        r = s.maxSubArray(nums);
        assert(r == e);
    }

    {
        nums = {5, 4, -1, 7, 8};
        e = 23;
        r = s.maxSubArray(nums);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}