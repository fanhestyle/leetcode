#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(TreeNode* root)
    {
        if(!root)
            return 0;

        int depth = 1;
        dfs(root, 1, depth);
        return depth;
    }

    void dfs(TreeNode* root, int level, int& max)
    {
        if (!root)
            return;

        if (level >= max)
        {
            max = level;
        }

        dfs(root->left, level + 1, max);
        dfs(root->right, level + 1, max);
    }
};