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
        if (strs.empty())
            return 0;

        vector<vector<pair<int, int>>> dp(
            strs.size() + 1, vector<pair<int, int>>(m + 1, make_pair(0, 0)));

        // string firstStr = strs[0];
        // int zeros = 0;
        // int ones = 0;
        // getZerosAndOnes(firstStr, zeros, ones);
        // for (int i = 0; i <= m; i++)
        // {
        //     if (i < zeros)
        //     {
        //         dp[0][i] = make_pair(0, n);
        //         continue;
        //     }
        //     else
        //     {
        //         if (n < ones)
        //         {
        //             dp[0][i] = make_pair(0, n);
        //         }
        //         else
        //         {
        //             dp[0][i] = make_pair(1, n - ones);
        //         }
        //     }
        // }

        for (int i = 0; i <= m; i++)
        {
            dp[0][i] = make_pair(1, n);
        }

        for (int i = 1; i <= strs.size(); i++)
        {
            for (int j = 0; j <= m; j++)
            {
                int zeros = 0;
                int ones = 0;
                getZerosAndOnes(strs[i - 1], zeros, ones);

                if (j < zeros)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else // j >= zeros
                {
                    int remainedOnes = dp[i - 1][j - zeros].second;
                    if (remainedOnes < ones)
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                    else
                    {
                        int v = dp[i - 1][j - zeros].first + 1;
                        if (v > dp[i - 1][j].first)
                        {
                            dp[i][j].first = v;
                            dp[i][j].second =
                                dp[i - 1][j - zeros].second - ones;
                        }
                        else if (v == dp[i - 1][j].first)
                        {
                            if (dp[i - 1][j].second <
                                dp[i - 1][j - zeros].second - ones)
                            {
                                dp[i][j].first = v;
                                dp[i][j].second =
                                    dp[i - 1][j - zeros].second - ones;
                            }
                            else
                            {
                                dp[i][j] = dp[i - 1][j];
                            }
                        }
                        else
                        {
                            dp[i][j] = dp[i - 1][j];
                        }
                    }
                }
            }
        }

        return dp[strs.size()][m].first;
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