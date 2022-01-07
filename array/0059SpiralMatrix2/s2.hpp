#pragma once

/*
转圈圈 每次按右，下，左，上的顺序填充一次，这样圈的值缩减2
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> result(n, vector<int>(n, 0));

        int loop = n / 2;

        int startX = 0;
        int startY = 0;
        int offset = 0;
        int cnt = 1;

        while (loop--)
        {
            //往右，但是空出最右侧
            for (int i = startX; i < n - offset - 1; i++)
            {
                result[startY][i] = cnt++;
            }

            for (int j = startY; j < n - offset - 1; j++)
            {
                result[j][n - offset - 1] = cnt++;
            }

            for (int i = n - offset - 1; i > startX; i--)
            {
                result[n - offset - 1][i] = cnt++;
            }

            for (int j = n - offset - 1; j > startY; j--)
            {
                result[j][startX] = cnt++;
            }

            startX++;
            startY++;
            offset += 1;
        }

        //如果n是奇数，那么还需要处理中间的唯一元素
        if (n % 2)
        {
            result[startX][startY] = cnt;
        }

        return result;
    }
};