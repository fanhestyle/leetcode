#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        int row = obstacleGrid.size();
        int col = obstacleGrid.at(0).size();
        vector<vector<int>> dp(row, vector<int>(col, 1));

        int foundObstacle = false;
        for (int i = 0; i < row; i++)
        {
            if (foundObstacle)
            {
                dp[i][0] = 0;
            }
            else
            {
                if (obstacleGrid[i][0] == 0)
                {
                    dp[i][0] = 1;
                }
                else
                {
                    dp[i][0] = 0;
                    foundObstacle = true;
                }
            }
        }

        foundObstacle = false;
        for (int i = 0; i < col; i++)
        {
            if (foundObstacle)
            {
                dp[0][i] = 0;
            }
            else
            {
                if (obstacleGrid[0][i] == 0)
                {
                    dp[0][i] = 1;
                }
                else
                {
                    dp[0][i] = 0;
                    foundObstacle = true;
                }
            }
        }

        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                if (obstacleGrid[i][j] == 1)
                    dp[i][j] = 0;
                else
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[row - 1][col - 1];
    }
};