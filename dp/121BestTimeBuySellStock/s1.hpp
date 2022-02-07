#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//convert to maximum sub-array sum

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int mprofit = 0;
        int sum = 0;

        for (int i = 0; i < prices.size() - 1; i++)
        {
            int diff = prices[i + 1] - prices[i];
            sum += diff;
            if (sum < 0)
            {
                sum = 0;
            }
            if (mprofit < sum)
            {
                mprofit = sum;
            }
        }

        return mprofit;
    }
};