#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLengthOfLCIS(vector<int>& nums)
    {
        int sum = 1;
        int maxsum = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] - nums[i - 1] > 0)
            {
                sum += 1;
                if (maxsum < sum)
                    maxsum = sum;
            }
            else
            {
                sum = 1;
            }
        }

        return maxsum;
    }
};