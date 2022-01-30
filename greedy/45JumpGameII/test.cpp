#include "s1.hpp"

// int jump(vector<int>& nums)

int main()
{
    Solution s;
    vector<int> nums;
    int r, e;

    {
        nums = {2, 3, 1, 1, 4};
        e = 2;
        r = s.jump(nums);
        assert(r == e);
    }

    {
        nums = {2, 3, 0, 1, 4};
        e = 2;
        r = s.jump(nums);
        assert(r == e);
    }

    {
        nums = {2, 3, 1};
        e = 1;
        r = s.jump(nums);
        assert(r == e);
    }

    {
        nums = {7, 0, 9, 6, 9, 6, 1, 7, 9, 0, 1, 2, 9, 0, 3};
        e = 2;
        r = s.jump(nums);
        assert(r == e);
    }

    {
        nums = {1, 2, 3};
        e = 2;
        r = s.jump(nums);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}