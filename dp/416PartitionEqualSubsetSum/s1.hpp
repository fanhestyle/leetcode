#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// backtracking brutal force

class Solution
{
public:
    bool canPartition(vector<int>& nums)
    {
        if (nums.size() <= 1)
            return false;

        int sum = 0;
        for (int it : nums)
            sum += it;

        if (sum % 2 != 0)
            return false;

        int targetSum = sum / 2;

        vector<int> track;
        return dfs(nums, track, targetSum, 0);
    }

    bool dfs(vector<int> nums, vector<int>& track, int targetSum,
             int startIndex)
    {
        if (accumulate(track.begin(), track.end(), 0) > targetSum)
            return false;
        if (accumulate(track.begin(), track.end(), 0) == targetSum)
            return true;

        for (int i = startIndex; i < nums.size(); i++)
        {
            track.push_back(nums[i]);
            if (dfs(nums, track, targetSum, i + 1))
                return true;
            track.pop_back();
        }

        return false;
    }
};