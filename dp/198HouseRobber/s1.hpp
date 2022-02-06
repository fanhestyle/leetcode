#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int>& nums)
    {
        int len = nums.size();
        int one = 0, two = 0;
        for (int i = 0; i < len; i++)
        {
            if (i % 2 == 0)
                one += nums[i];
            else
                two += nums[i];
        }

        return one > two ? one : two;
    }
};