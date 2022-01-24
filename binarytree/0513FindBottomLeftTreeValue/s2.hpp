#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

// top-down

class Solution
{
public:
    int findBottomLeftValue(TreeNode* root)
    {
        if (!root)
            return -1;

        int lft;
        int maxDepth = -1;
        findBLNode(root, 0, lft, maxDepth);

        return lft;
    }

    void findBLNode(TreeNode* root, int depth, int& leftistVal, int& maxDepth)
    {
        if (!root)
            return;

        if (!root->left && !root->right)
        {
            if (depth > maxDepth)
            {
                maxDepth = depth;
                leftistVal = root->val;
            }
            return;
        }

        if (root->left)
        {
            findBLNode(root->left, depth + 1, leftistVal, maxDepth);
        }

        if (root->right)
        {
            findBLNode(root->right, depth + 1, leftistVal, maxDepth);
        }
    }
};