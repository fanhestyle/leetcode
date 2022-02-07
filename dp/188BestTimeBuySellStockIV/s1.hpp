#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(int k, vector<int>& prices)
    {
        int len = prices.size();
        if (len <= 1)
            return 0;
        if (k <= 0)
            return 0;

        vector<vector<int>> dp(len, vector<int>(2 * k, 0));
        for (int i = 0; i < (2 * k); i++)
        {
            if (i % 2 == 0)
                dp[0][i] = -prices[0];
            else
                dp[0][i] = 0;
        }

        for (int i = 1; i < len; i++)
        {
            for (int j = 0; j < (2 * k); j++)
            {
                if (j % 2 == 0)
                {
                    if (j == 0)
                        dp[i][j] = max(dp[i - 1][j], -prices[i]);
                    else
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1] - prices[i]);
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1] + prices[i]);
                }
            }
        }

        return dp[len - 1][(2 * k) - 1];
    }
};