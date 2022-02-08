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
    int longestPalindromeSubseq(string s)
    {
        int len = s.length();
        vector<vector<int>> dp(len, vector<int>(len, 0));

        for(int i = len-1; i >= 0; i--)
        {
            for(int j = i; j < len; j++)
            {
                if(s[i] == s[j])
                {
                    if(i == j)
                    {
                        dp[i][j] = 1;
                    }
                    else if (j - i < 2)
                    {
                        dp[i][j] = dp[i][j-1] + 1;
                    }
                    else
                    {
                        dp[i][j] = dp[i+1][j-1] + 2;
                    }
                }
                else
                {
                    dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
                }
            }
        }
        return dp[0][len-1];
    }
};