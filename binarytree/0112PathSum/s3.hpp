#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasPathSum(TreeNode* root, int targetSum)
    {
        if (!root)
            return false;

        vector<int> track;
        return dfs(root, track, targetSum);
    }

    bool dfs(TreeNode* root, vector<int>& track, int target)
    {
        track.push_back(root->val);

        if (!root->left && !root->right)
        {
            int sum = 0;
            for (auto it : track)
            {
                sum += it;
            }
            if (target == sum)
                return true;
            else
                return false;
        }

        if (root->left)
        {
            if (dfs(root->left, track, target))
                return true;
            track.pop_back();
        }

        if (root->right)
        {
            if (dfs(root->right, track, target))
                return true;
            track.pop_back();
        }

        return false;
    }
};