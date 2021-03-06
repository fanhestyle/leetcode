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
        int len = temperatures.size();
        stack<int> istack;
        vector<int> result(len, 0);
        istack.push(0);

        for (int i = 1; i < len; i++)
        {
            int curTemp = temperatures[i];
            while (!istack.empty())
            {
                int curStackIndex = istack.top();
                int curStackTopTemp = temperatures[curStackIndex];
                if (curTemp <= curStackTopTemp)
                    break;
                result[curStackIndex] = i - curStackIndex;
                istack.pop();
            }
            istack.push(i);
        }

        return result;
    }
};