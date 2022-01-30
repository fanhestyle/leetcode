#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        if (prices.size() < 2)
            return 0;

        int sumMax = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            int v = prices[i] - prices[i - 1];
            if (v > 0)
                sumMax += v;
        }

        return sumMax < 0 ? 0 : sumMax;
    }
};