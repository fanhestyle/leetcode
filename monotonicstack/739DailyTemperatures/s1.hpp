#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        int tlen = temperatures.size();
        vector<int> result;

        for (int i = 0; i < tlen; i++)
        {
            int cur = temperatures[i];
            int k = 1;
            while ((k + i < tlen) && temperatures[k + i] <= cur)
            {
                k++;
            }
            if (k + i == tlen)
                result.push_back(0);
            else
                result.push_back(k);
        }

        return result;
    }
};