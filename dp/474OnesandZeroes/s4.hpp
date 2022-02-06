#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxForm(vector<string>& strs, int m, int n)
    {
        int sz = strs.size();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < sz; i++)
        {
            int zeros = 0;
            int ones = 0;
            getZerosAndOnes(strs[i], zeros, ones);

            for (int j = m; j >= zeros; j--)
            {
                for (int k = n; k >= ones; k--)
                {
                    dp[j][k] = max(dp[j - zeros][k - ones] + 1, dp[j][k]);
                }
            }
        }
        return dp[m][n];
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