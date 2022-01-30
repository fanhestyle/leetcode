#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int>& ratings)
    {
        int sz = ratings.size();

        vector<int> leftCnt;
        leftCnt.resize(sz);

        //左侧满足
        for (int i = 0; i < sz; i++)
        {
            if (i >= 1 && ratings[i] > ratings[i - 1])
            {
                leftCnt[i] = leftCnt[i - 1] + 1;
            }
            else
            {
                leftCnt[i] = 1;
            }
        }

        int minCandyCnt = 0;
        int curCandy = 0;

        //右侧满足
        for (int i = sz - 1; i >= 0; i--)
        {
            if (i <= sz - 2 && ratings[i] > ratings[i + 1])
            {
                curCandy++;
            }
            else
            {
                curCandy = 1;
            }
            int finalCandy = max(curCandy, leftCnt[i]);
            minCandyCnt += finalCandy;
        }

        return minCandyCnt;
    }
};