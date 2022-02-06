#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// simplified backtracking brutal force

class Solution
{
public:
    bool canPartition(vector<int>& nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0)
            return false;

        return dfs(nums, sum / 2, 0);
    }

    bool dfs(vector<int>& nums, int targetSum, int index)
    {
        if (targetSum < 0)
            return false;

        if (targetSum == 0)
            return true;

        for (int i = index; i < nums.size(); i++)
        {
            if (dfs(nums, targetSum - nums[i], i + 1))
                return true;
        }

        return false;
    }
};