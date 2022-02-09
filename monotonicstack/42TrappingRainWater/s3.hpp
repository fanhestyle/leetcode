#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// dynamic programming

class Solution
{
public:
    int trap(vector<int>& height)
    {
        int len = height.size();

        vector<int> dpLeft(len, 0);  //左侧最大值
        vector<int> dpRight(len, 0); //右侧最大值

        dpLeft[0] = height[0];
        for (int i = 1; i < len; i++)
            dpLeft[i] = max(dpLeft[i - 1], height[i]);

        dpRight[len - 1] = height[len - 1];
        for (int i = len - 2; i >= 0; i--)
            dpRight[i] = max(dpRight[i + 1], height[i]);

        int sum = 0;
        for (int i = 1; i < len - 1; i++)
        {
            int value = min(dpLeft[i], dpRight[i]) - height[i];
            sum += value; //(value > 0 ? value : 0);
        }

        return sum;
    }
};