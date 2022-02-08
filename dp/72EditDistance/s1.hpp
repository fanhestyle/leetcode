#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int len1 = word1.size();
        int len2 = word2.size();

        vector<vector<int>> dp(len2 + 1, vector<int>(len1 + 1, 0));

        for (int i = 0; i <= len1; i++)
            dp[0][i] = i;
        for (int j = 0; j <= len2; j++)
            dp[j][0] = j;

        for (int i = 1; i <= len2; i++)
            for (int j = 1; j <= len1; j++)
            {
                if (word2[i - 1] == word1[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                    dp[i][j] =
                        min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) +
                        1;
            }

        return dp[len2][len1];
    }
};