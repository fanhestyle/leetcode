#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static const int N = 9;

    static void solveSudoku(vector<vector<char>>& board,
                            std::ostream& os = std::cout)
    {
        dfs(board, 0, 0, os);
    }

    static void dfs(std::vector<std::vector<char>>& board, int r, int c,
                    std::ostream& os)
    {
        if (r == N)
            return;

        if (c < 9)
            dfs(board, r, c + 1, os);
        else
            dfs(board, r + 1, c, os);

        for (int i = '1'; i <= '9'; i++)
        {
            if (isValid(r, c, i, board))
            {
                
            }
        }
    }

    static bool isValid(int row, int col, char ch, vector<vector<char>>& board)
    {
        for (int i = 0; i < N; i++)
        {
            if (i != col && ch == board[row][i])
                return false;
        }

        for (int j = 0; j < N; j++)
        {
            if (j != row && ch == board[j][col])
                return false;
        }

        for (int i = (row / 3) * 3; i <= (row / 3) * 3 + 2; i++)
        {
            for (int j = (col / 3) * 3; j <= (col / 3) * 3 + 2; j++)
            {
                if (i != row && j != col && board[i][j] == ch)
                    return false;
            }
        }

        return true;
    }
};