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
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            int v = getValue(heights, i);
            if (v > sum)
                sum = v;
        }
        return sum;
    }

    int getValue(vector<int>& heights, int i)
    {
        int left = i - 1, right = i + 1;
        int v = heights[i];
        int sum = v;
        while (left >= 0 && heights[left] >= v)
        {
            sum += v;
            left--;
        }

        while (right < heights.size() && heights[right] >= v)
        {
            sum += v;
            right++;
        }

        return sum;
    }
};