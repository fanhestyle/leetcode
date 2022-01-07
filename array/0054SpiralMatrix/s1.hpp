#include <bits/stdc++.h>
using namespace std;

/*
我个人初次拿到这道题的解法，因为观察到元素是间隔是
{1,1,1,3,3,-1,-1,-3,1,1}有一些规律，就是只会出现1和3两个数，并且按规律递减
*/

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        int row = matrix.size();
        int col = matrix.at(0).size();

        int x = col;
        int y = row - 1;
        bool flag = true;

        vector<int> result;
        int arraySize = -1;

        while (result.size() < row * col)
        {
            for (int i = 0; i < x; i++)
            {
                if (flag)
                {
                    arraySize += 1;
                }
                else
                {
                    arraySize -= 1;
                }
                result.push_back(getElement(matrix, arraySize));
            }
            x--;

            for (int i = 0; i < y; i++)
            {
                if (flag)
                {
                    arraySize += col;
                }
                else
                {
                    arraySize -= col;
                }
                result.push_back(getElement(matrix, arraySize));
            }
            y--;

            flag = !flag;
        }

        return result;
    }

    // arraySize = 0-based index
    int getElement(vector<vector<int>>& matrix, int arraySize)
    {
        int row = matrix.size();
        int col = matrix.at(0).size();

        int r = arraySize / col;
        int c = arraySize % col;

        return matrix.at(r).at(c);
    }
};