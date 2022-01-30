#include <bits/stdc++.h>
using namespace std;

//股票买卖问题转换成最小连续子序列和的问题

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        if(prices.size() < 2)
            return 0;

        int profitMaxValue = 0;

        int sum = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            int v = prices[i] - prices[i-1];
            sum += v;
            if(profitMaxValue < sum){
                profitMaxValue = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }

        return profitMaxValue;
    }


};