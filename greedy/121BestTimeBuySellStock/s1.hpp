#include <bits/stdc++.h>
using namespace std;

//brutal force LeetCode上超时

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        if (prices.size() < 2)
            return 0;

        int maxP = INT_MIN;

        for (int i = 0; i < prices.size() - 1; i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (prices[j] - prices[i] > maxP)
                {
                    maxP = prices[j] - prices[i];
                }
            }
        }

        return maxP < 0 ? 0 : maxP;
    }
};