#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTargetSumWays(vector<int>& nums, int target)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int sumAll = sum + target;

        if (sumAll < 0 || sumAll % 2 != 0)
            return 0;

        int targetSum = sumAll / 2;

        vector<int> dp(targetSum + 1, 0);
        dp[0] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = targetSum; j >= 0; j--)
            {
                if (j >= nums[i])
                    dp[j] += dp[j - nums[i]];
            }
        }

        return dp[targetSum];
    }
};