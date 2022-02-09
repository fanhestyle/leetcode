#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// monotonic stack

class Solution
{
public:
    int largestRectangleArea(vector<int>& heights)
    {
        int len = heights.size();
        stack<int> istack;
        istack.push(0);

        int maxArea = 0;

        for(int i = 1; i < len; i++)
        {
            while (!istack.empty())
            {
                int topIndex = istack.top();
                int topValue = heights[topIndex];

                if(heights[i] < topValue)
                {
                    maxArea = max(maxArea, (i - topIndex) * topValue);
                    
                }
            }
            
        }

    }
};