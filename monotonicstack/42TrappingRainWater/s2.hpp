#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// double ptr

class Solution
{
public:
    int trap(vector<int>& height)
    {
        int len = height.size();
        int sum = 0;

        for (int i = 1; i < len - 1; i++)
        {
            int l, r;
            findBound(height, i, l, r);
            sum += (min(l, r) - height[i]);
        }
        return sum;
    }

    void findBound(vector<int>& height, int cur, int& left, int& right)
    {
        int len = height.size();
        left = height[cur];
        right = height[cur];

        int i = cur;
        while (i >= 0)
        {
            if (height[i] > left)
                left = height[i];
            i--;
        }

        i = cur;
        while (i < len)
        {
            if (height[i] > right)
                right = height[i];
            i++;
        }
    }
};