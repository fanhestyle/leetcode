#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        vector<vector<int>> result(n, vector<int>(n, 0));

        int cnt = 0;
        int r = 0, c = 0;
        int dinx = 0;
        while (cnt < n*n)
        {
            result[r][c] = ++cnt;

            int nextRow = r + direction[dinx][0];
            int nextCol = c + direction[dinx][1];

            if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= n ||
                result[nextRow][nextCol] != 0)
            {
                dinx = (dinx + 1) % 4;
            }
            r += direction[dinx][0];
            c += direction[dinx][1];
        }

        return result;
    }
};