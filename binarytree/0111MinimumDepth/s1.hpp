#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDepth(TreeNode* root)
    {
        if (!root)
            return 0;

        if (!root->left)
        {
            return minDepth(root->right) + 1;
        }
        else if (!root->right)
        {
            return minDepth(root->left) + 1;
        }
        else
        {
            int leftDepth = minDepth(root->left) + 1;
            int rightDepth = minDepth(root->right) + 1;

            return leftDepth < rightDepth ? leftDepth : rightDepth;
        }
    }
};