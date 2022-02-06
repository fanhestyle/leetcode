#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//动态规划解法

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        // 1:dp数组  dp[i][j] 从(0,0)到达 [i,j]位置的步骤数
        // 2:状态转移方程  dp[i][j] = dp[i-1][j] + dp[i][j-1]
        // 3:dp数组初始化 dp[i][0] = 1; dp[0][j] = 1;
        // 4:遍历顺序 从前往后遍历，逐行遍历即可
        // 5：打印验证

        int maxDim;
        int minDim;
        if (m < n)
        {
            minDim = m;
            maxDim = n;
        }
        else
        {
            minDim = n;
            maxDim = m;
        }

        vector<int> dp(minDim, 1);

        for (int i = 1; i < maxDim; i++)
        {
            for (int j = 1; j < minDim; j++)
                dp[j] += dp[j - 1];
        }

        return dp[minDim - 1];
    }
};