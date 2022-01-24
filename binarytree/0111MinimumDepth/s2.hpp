#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDepth(TreeNode* root) { return depth(root); }

    int depth(TreeNode* root)
    {
        if (!root)
            return 0;

        int leftDepth = depth(root->left);
        int rightDepth = depth(root->right);

        if (!root->left)
        {
            return rightDepth + 1;
        }
        else if (!root->right)
        {
            return leftDepth + 1;
        }

        return 1 + (leftDepth > rightDepth ? rightDepth : leftDepth);
    }
};