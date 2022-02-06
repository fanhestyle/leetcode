#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSquares(int n)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        if (n == 3)
            return 3;
        if (n == 4)
            return 1;

        vector<int> dp(n + 1, 0);

        for (int i = 0; i <= n; i++)
            dp[i] = i;

        for (int i = 1; i <= n / 2; i++)
        {
            for (int j = i * i; j <= n; j++)
            {
                if (j >= i * i)
                    dp[j] = min(dp[j - i * i] + 1, dp[j]);
            }
        }

        return dp[n];
    }
};