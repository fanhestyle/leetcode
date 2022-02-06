#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int change(int amount, vector<int>& coins)
    {
        vector<int> dp(amount + 1, 0);

        dp[0] = 1;
        for (int i = 0; i < coins.size(); i++)
        {
            for (int j = coins[i]; j <= amount; j++)
            {
                if (j >= coins[i])
                {
                    dp[j] += dp[j - coins[i]];
                }
            }
        }

        return dp[amount];
    }
};