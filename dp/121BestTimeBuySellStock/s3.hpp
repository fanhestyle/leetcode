#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//greedy
//只买卖一次，选择最低价买入，最高价卖出

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int minPrice = INT_MAX;
        int maxprofit = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < minPrice)
                minPrice = prices[i];

            if(prices[i]-minPrice > maxprofit)
                maxprofit = prices[i] - minPrice;
        }

        return maxprofit;
    }
};