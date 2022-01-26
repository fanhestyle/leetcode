#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        if (nums.size() == 0)
            return nullptr;
        return satobst(nums, 0, nums.size() - 1);
    }

    TreeNode* satobst(vector<int>& nums, int low, int high)
    {
        if (low > high)
            return nullptr;

        int mid = low + (high - low) / 2;
        TreeNode* r = new TreeNode(nums[mid]);
        r->left = satobst(nums, low, mid - 1);
        r->right = satobst(nums, mid + 1, high);
        return r;
    }
};