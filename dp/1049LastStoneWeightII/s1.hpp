#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//尝试选取最大的重量是整个重量的一半

class Solution
{
public:
    int lastStoneWeightII(vector<int>& stones)
    {
        int sum = accumulate(stones.begin(), stones.end(), 0);

        int halfSum = sum / 2;

        vector<int> dp(halfSum + 1, 0);

        for (int i = 0; i < stones.size(); i++)
        {
            for (int j = halfSum; j >= 0; j--)
            {
                if (j >= stones[i])
                    dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
            }
        }

        return sum - 2 * dp[halfSum];
    }
};