#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int memo[1001];

public:
    int combinationSum4(vector<int>& nums, int target)
    {
        for (int i = 0; i < 1001; i++)
            memo[i] = -1;
        return dfs(nums, target);
    }

    int dfs(vector<int>& nums, int target)
    {
        if (target < 0)
        {
            return 0;
        }

        if (target == 0)
        {
            return 1;
        }

        if (memo[target] != -1)
        {
            return memo[target];
        }

        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int v = dfs(nums, target - nums[i]);
            sum += v;
        }
        memo[target] = sum;

        return sum;
    }
};