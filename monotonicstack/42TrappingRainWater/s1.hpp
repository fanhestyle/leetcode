#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int>& height)
    {
        int len = height.size();
        stack<int> istack;
        istack.push(0);

        int sum = 0;

        for (int i = 1; i < len; i++)
        {
            if (!istack.empty())
            {
                int topIndex = istack.top();
                int topValue = height[topIndex];

                if (topValue > height[i])
                {
                    istack.push(i);
                }
                else if (topValue == height[i])
                {
                    istack.pop();
                    istack.push(i);
                }
                else
                {
#if 1
                    int oneSum = 0;
                    while (!istack.empty() && height[i] > height[istack.top()])
                    {
                        int mid = istack.top();
                        istack.pop();

                        if (!istack.empty())
                        {
                            int ti = istack.top();
                            int secondTopValue = height[ti]; //凹槽高点

                            int oneSum =
                                (i - ti - 1) *
                                (min(secondTopValue, height[i]) - height[mid]);
                            sum += oneSum;
                        }
                    }
                    istack.push(i);
#endif
                }
            }
        }

        return sum;
    }
};