//#include "s1.hpp"
#include "s2.hpp"

// int largestSumAfterKNegations(vector<int>& nums, int k)

int main()
{
    Solution s;
    vector<int> nums;
    int k;
    int r, e;

    {
        nums = {4, 2, 3};
        k = 1;
        e = 5;
        r = s.largestSumAfterKNegations(nums, k);
        assert(r == e);
    }

    {
        nums = {3, -1, 0, 2};
        k = 3;
        e = 6;
        r = s.largestSumAfterKNegations(nums, k);
        assert(r == e);
    }

    {
        nums = {2, -3, -1, 5, -4};
        k = 2;
        e = 13;
        r = s.largestSumAfterKNegations(nums, k);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}