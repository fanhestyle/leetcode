#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> result;
        vector<string> track;
        initBoard(n, track);
        dfs(result, track, n, 0);
        return result;
    }

    void dfs(vector<vector<string>>& result, vector<string>& track, int n,
             int index)
    {
        if (index == n)
        {
            result.push_back(track);
            return;
        }

        // row index
        for (int i = 0; i < n; i++)
        {
            if (isValidPos(track, index, i))
            {
                track[index][i] = 'Q';
                dfs(result, track, n, index + 1);
                track[index][i] = '.';
            }
        }
    }

    bool isValidPos(vector<string>& board, int row, int col)
    {
        int n = board.size();

        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q')
                return false;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((row - i == col - j) || (row - i == j - col))
                {
                    if(board[i][j] == 'Q')
                        return false;
                }
            }
        }

        return true;
    }

    void initBoard(int n, vector<string>& board)
    {
        for (int i = 0; i < n; i++)
        {
            std::string str(n, '.');
            board.push_back(str);
        }
    }
};