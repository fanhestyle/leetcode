#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// brutal force

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int maxprofit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                int diff = prices[j] - prices[i];
                if (diff > maxprofit)
                    maxprofit = diff;
            }
        }

        return maxprofit;
    }
};