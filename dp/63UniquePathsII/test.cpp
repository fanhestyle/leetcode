#include "s1.hpp"

//[[0,0,0],[0,1,0],[0,0,0]]

// int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {}

int main()
{
    Solution solution;
    vector<vector<int>> obstacleGrid;
    int r, e;

    {
        obstacleGrid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
        e = 2;
        r = solution.uniquePathsWithObstacles(obstacleGrid);

        ASSERT_EX(r == e, cerr << "e:" << e << ", r:" << r << endl);
    }

    {
        obstacleGrid = {{0, 1}, {0, 0}};
        e = 1;
        r = solution.uniquePathsWithObstacles(obstacleGrid);

        ASSERT_EX(r == e, cerr << "e:" << e << ", r:" << r << endl);
    }

    cout << "PASS!" << endl;
}