#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// dynamic programming

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int len = prices.size();
        if (len <= 1)
            return 0;

        vector<vector<int>> dp(len, vector<int>(2, 0));
        dp[0][0] = -prices[0]; //不持有最大值
        dp[0][1] = 0;          //持有最大值

        for (int i = 1; i < len; i++)
        {
            dp[i][0] = max(dp[i - 1][1] - prices[i], dp[i - 1][0]);
            dp[i][1] = max(dp[i][0] + prices[i], dp[i][0]);
        }

        return dp[len - 1][1];
    }
};