#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int coinChange(vector<int>& coins, int amount)
    {
        vector<int> dp(amount + 1, 100001);
        dp[0] = 0;

        for (int i = 0; i < coins.size(); i++)
        {
            for (int j = coins[i]; j <= amount; j++)
            {
                if (dp[j - coins[i]] != 100001)
                {
                    dp[j] = min(dp[j], dp[j - coins[i]] + 1);
                }
            }
        }
        return dp[amount] == 100001 ? -1 : dp[amount];
    }
};