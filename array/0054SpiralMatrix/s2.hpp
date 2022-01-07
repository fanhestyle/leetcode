#include <bits/stdc++.h>
using namespace std;

/*
使用一个数组标记访问过的元素
*/

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        int rowNum = matrix.size();
        int colNum = matrix.at(0).size();

        //标记行列变化
        int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<vector<bool>> visited(rowNum, vector<bool>(colNum, false));

        vector<int> result;
        int cnt = 0;
        int r = 0;
        int c = 0;
        int nextRow;
        int nextCol;
        int directionIndex = 0;
        while (cnt < rowNum * colNum)
        {
            result.push_back(matrix[r][c]);
            cnt++;
            visited[r][c] = true;

            nextRow = r + direction[directionIndex][0];
            nextCol = c + direction[directionIndex][1];

            if (nextRow < 0 || nextRow >= rowNum || nextCol < 0 ||
                nextCol >= colNum || visited[nextRow][nextCol])
            {
                directionIndex = (directionIndex + 1) % 4;
            }

            r = r + direction[directionIndex][0];
            c = c + direction[directionIndex][1];
        }

        return result;
    }
};