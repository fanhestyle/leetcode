#include "s1.hpp"

// bool canJump(vector<int>& nums)

int main()
{
    Solution s;
    vector<int> nums;
    bool r, e;

    {
        nums = {2, 3, 1, 1, 4};
        e = true;
        r = s.canJump(nums);
        assert(r == e);
    }

    {
        nums = {3, 2, 1, 0, 4};
        e = false;
        r = s.canJump(nums);
        assert(r == e);
    }

    {
        nums = {1, 2};
        e = true;
        r = s.canJump(nums);
        assert(r == e);
    }

    {
        nums = {1, 1, 1, 0};
        e = true;
        r = s.canJump(nums);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}