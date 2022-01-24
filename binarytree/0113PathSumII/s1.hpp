#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum)
    {
        vector<vector<int>> result;
        vector<int> track;
        if (!root)
            return result;
        dfs(root, result, track, targetSum);

        return result;
    }

    void dfs(TreeNode* root, vector<vector<int>>& result, vector<int>& track,
             int targetSum)
    {
        track.push_back(root->val);
        if (!root->left && !root->right)
        {
            int sum = 0;
            for (int it : track)
                sum += it;
            if (sum == targetSum)
                result.push_back(track);
            return;
        }
        if (root->left)
        {
            dfs(root->left, result, track, targetSum);
            track.pop_back();
        }
        if (root->right)
        {
            dfs(root->right, result, track, targetSum);
            track.pop_back();
        }
    }
};