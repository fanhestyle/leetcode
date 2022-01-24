#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    vector<vector<int>> result;
    vector<int> track;
    int sum;

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum)
    {
        track.clear();
        result.clear();
        sum = targetSum;
        traverse(root);
        return result;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;

        track.push_back(root->val);
        sum -= root->val;
        if (!root->left && !root->right)
        {
            if (sum == 0)
            {
                result.push_back(track);
            }
        }

        traverse(root->left);
        traverse(root->right);
        sum += root->val;
        track.pop_back();
    }
};