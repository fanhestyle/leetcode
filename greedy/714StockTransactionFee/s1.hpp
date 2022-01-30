#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int>& prices, int fee)
    {
        if (prices.size() <= 1)
            return 0;

        int buyPrice = prices[0];
        int result = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < buyPrice)
            {
                buyPrice = prices[i];
            }

            if (prices[i] > buyPrice + fee)
            {
                result += (prices[i] - buyPrice - fee);
                buyPrice = prices[i] - fee;
            }
        }

        return result;
    }
};