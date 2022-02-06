#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
        if (cost.size() < 2)
            return 0;

        int n = cost.size();
        int dp[3];

        dp[0] = 0;
        dp[1] = 0;

        for (int i = 2; i <= n; i++)
        {
            dp[2] = min(dp[1] + cost[i - 1], dp[0] + cost[i - 2]);
            dp[0] = dp[1];
            dp[1] = dp[2];
        }

        return dp[2];
    }
};