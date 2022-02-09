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
    int largestRectangleArea(vector<int>& heights)
    {
        int len = heights.size();

        vector<int> dpLeft(len, 0);
        vector<int> dpRight(len, 0);

        dpLeft[0] = -1;
        for(int i = 1; i < len; i++)
        {
            int t = i - 1;
            while (t >= 0 && heights[t] >= heights[i])
            {
                t = dpLeft[t];
            }
            dpLeft[i] = t;
        }

        dpRight[len-1] = len;
        for(int i = len - 2; i >= 0; i--)
        {
            int t = i + 1;
            while (t < len && heights[t] >= heights[i])
            {
                t = dpRight[t];
            }
            dpRight[i] = t;
        }

        int sum = 0;
        for(int i = 0; i < len; i++)
        {
            int w = dpRight[i] - dpLeft[i] - 1;
            sum = max(sum, w*heights[i]);
        }

        return sum;
    }
};