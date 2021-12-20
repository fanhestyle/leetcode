#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalNQueens(int n)
    {
        vector<vector<int>> board;
        initBoard(board, n);

        // board, track, sum, rowNum
        int result = 0;
        dfs(board, result, 0);
        return result;
    }

    void dfs(vector<vector<int>>& board, int& sum, int row)
    {
        int N = board.size();
        if (row >= N)
        {
            sum += 1;
            return;
        }

        for (int i = 0; i < N; i++)
        {
            if (isValidPos(board, row, i))
            {
                board[row][i] = 1;
                dfs(board, sum, row + 1);
                board[row][i] = 0;
            }
        }
    }

    void initBoard(vector<vector<int>>& board, int N)
    {
        for (int i = 0; i < N; i++)
        {
            vector<int> row(N, 0);
            board.push_back(row);
        }
    }

    bool isValidPos(vector<vector<int>>& board, int row, int col)
    {
        int n = board.size();

        for (int i = 0; i < row; i++)
            if (board[i][col] == 1)
                return false;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((row - i == col - j) || (row - i == j - col))
                {
                    if (board[i][j] == 1)
                        return false;
                }
            }
        }

        return true;
    }
};
