#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int i = 0;
        int j = nums.size() - 1;

        vector<int> ret;
        ret.resize(nums.size());
        int k = nums.size() - 1;

        while (i <= j)
        {
            if (abs(nums[i]) < abs(nums[j]))
            {
                ret[k] = nums[j] * nums[j];
                --j;
            }
            else
            {
                ret[k] = nums[i] * nums[i];
                ++i;
            }
            --k;
        }

        return ret;
    }
};