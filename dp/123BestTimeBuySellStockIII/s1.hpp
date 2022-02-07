#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//解法无法通过LeetCode

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int len = prices.size();
        if (len <= 1)
            return 0;

        multiset<int, greater<int>> vset;

        int sum = 0;
        int maxV = 0;

        for (int i = 0; i < len - 1; i++)
        {
            int diff = prices[i + 1] - prices[i];

            sum += diff;

            if (sum > 0)
            {
                if (sum > maxV)
                {
                    maxV = sum;
                }
            }
            else
            {
                sum = 0;
                if (maxV > 0)
                {
                    vset.insert(maxV);
                    maxV = 0;
                }
            }
        }

        if (maxV > 0)
        {
            vset.insert(maxV);
        }

        if (vset.size() == 0)
            return 0;
        if (vset.size() == 1)
        {
            return *vset.begin();
        }
        else
        {
            auto it = vset.begin();
            int transanction1 = *it++;
            int transanction2 = *it;
            return transanction1 + transanction2;
        }
    }
};