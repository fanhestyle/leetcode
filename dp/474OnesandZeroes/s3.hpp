#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

/*
通过外挂一个维度的方式来处理，在判断的时候少了一个维度导致初始化的时候某些情况下
不好处理，直接多一维进行处理（不把n维度挂在m上）
*/

class Solution
{
public:
    int findMaxForm(vector<string>& strs, int m, int n)
    {
        int sz = strs.size();

        vector<vector<vector<int>>> dp(
            sz + 1, vector<vector<int>>(m + 1, vector<int>(n + 1, 0)));

        for (int i = 1; i <= sz; i++)
        {
            int zeros = 0;
            int ones = 0;

            getZerosAndOnes(strs[i - 1], zeros, ones);

            for (int j = 0; j <= m; j++)
            {
                for (int k = 0; k <= n; k++)
                {
                    if (j < zeros || k < ones)
                        dp[i][j][k] = dp[i - 1][j][k];
                    else
                    {
                        dp[i][j][k] = max(dp[i - 1][j - zeros][k - ones] + 1,
                                          dp[i - 1][j][k]);
                    }
                }
            }
        }

        return dp[sz][m][n];
    }

    void getZerosAndOnes(const string& str, int& zeros, int& ones)
    {
        zeros = 0;
        ones = 0;
        for (char ch : str)
        {
            if (ch == '0')
                zeros++;
            else
                ones++;
        }
    }
};