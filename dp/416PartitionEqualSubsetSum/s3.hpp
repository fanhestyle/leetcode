#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// 0-1 package
// two dimension dp

class Solution
{
public:
    bool canPartition(vector<int>& nums)
    {
        int sz = nums.size();

        if (sz <= 1)
            return false;

        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1 == 1)
            return false;

        sum /= 2;

        // dp[i][j]
        vector<vector<int>> dp(sz, vector<int>(sum + 1, 0));

        if (nums[0] <= sum)
            dp[0][nums[0]] = 1;

        for (int i = 1; i < sz; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (nums[i] > j)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    if (dp[i - 1][j])
                        dp[i][j] = 1;
                    else
                        dp[i][j] = dp[i - 1][j - nums[i]];
                }
            }
        }

        return dp[sz - 1][sum];
    }
};