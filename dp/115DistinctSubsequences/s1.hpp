#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numDistinct(string s, string t)
    {
        int len1 = s.size();
        int len2 = t.size();

        vector<vector<uint64_t>> dp(len2, vector<uint64_t>(len1 + 1, 0));

        for (int i = 1; i <= len1; i++)
        {
            dp[0][i] = dp[0][i - 1] + (t[0] == s[i - 1]);
        }

        for (int i = 1; i < len2; i++)
        {
            for (int j = 1; j <= len1; j++)
            {
                if (t[i] == s[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }

        return dp[len2 - 1][len1];
    }
};