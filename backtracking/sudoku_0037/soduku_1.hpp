#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static const int N = 9;

    static void solveSudoku(vector<vector<char>>& board) { dfs(board, 0, 0); }

    static bool dfs(std::vector<std::vector<char>>& board, int r, int c)
    {
        if (r == N)
            return true;

        if (c == N)
            return dfs(board, r + 1, 0);

        if (board[r][c] != '.')
        {
            return dfs(board, r, c + 1);
        }

        for (int k = '1'; k <= '9'; k++)
        {
            if (isValid(r, c, k, board))
            {
                board[r][c] = k;
                if (dfs(board, r, c + 1))
                    return true;
                board[r][c] = '.';
            }
        }
        return false;

        return false;
    }

    static bool isValid(int row, int col, char ch, vector<vector<char>>& board)
    {
        for (int i = 0; i < N; i++)
        {
            if (ch == board[row][i])
                return false;
        }

        for (int j = 0; j < N; j++)
        {
            if (ch == board[j][col])
                return false;
        }

        for (int i = (row / 3) * 3; i <= (row / 3) * 3 + 2; i++)
        {
            for (int j = (col / 3) * 3; j <= (col / 3) * 3 + 2; j++)
            {
                if (board[i][j] == ch)
                    return false;
            }
        }

        return true;
    }
};