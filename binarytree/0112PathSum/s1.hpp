#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int sum;
    bool found;

public:
    bool hasPathSum(TreeNode* root, int targetSum)
    {
        if (!root)
            return false;

        found = false;
        sum = targetSum;
        traverse(root);
        return found;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;

        sum -= root->val;
        if (sum == 0 && !root->left && !root->right)
        {
            found = true;
            return;
        }

        traverse(root->left);
        traverse(root->right);

        sum += root->val;
    }
};