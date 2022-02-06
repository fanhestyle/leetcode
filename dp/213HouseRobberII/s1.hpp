#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int>& nums)
    {
        int len = nums.size();
        if (len == 0)
            return 0;
        if (len == 1)
            return nums[0];
        if(len == 2)
            return max(nums[0],nums[1]);

        vector<int> dp(len, 0);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size() - 1; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        int p = dp[len - 2];


        dp[0] = nums[1];
        dp[1] = max(nums[1],nums[2]);
        for (int i = 2; i < nums.size()-1; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i+1]);
        }
        int q = dp[len - 2];

        return p > q ? p : q;
    }
};