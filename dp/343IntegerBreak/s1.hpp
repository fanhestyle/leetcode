#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int integerBreak(int n)
    {
        if (n == 2)
            return 1;

        vector<int> dp(n + 1, 0);
        dp[2] = 1;

        for (int i = 3; i <= n; i++)
        {
            for (int j = 1; j < i - 1; j++)
            {
                dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
            }
        }

        return dp[n];
    }
};