#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        int len = nums.size();
        stack<int> istack;
        istack.push(0);

        // vector<int> result(2 * len, -1);
        vector<int> result(len, -1);

        for (int i = 1; i < 2 * len; i++)
        {
            int curValue = nums[i % len];
            while (!istack.empty())
            {
                int topIndex = istack.top();
                if (nums[topIndex % len] >= curValue)
                    break;
                istack.pop();

                result[topIndex % len] = curValue;
            }
            istack.push(i);
        }

        return result;
        //  return vector<int>(result.begin(), result.begin() + len);
    }
};