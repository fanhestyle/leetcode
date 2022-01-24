#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isBalanced(TreeNode* root)
    {
        if (!root)
            return true;

        int lh = getHeight(root->left);
        int rh = getHeight(root->right);

        if (abs(lh - rh) > 1)
        {
            return false;
        }
        else
        {
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }

    int getHeight(TreeNode* p)
    {
        if (!p)
            return 0;

        int leftHeight = getHeight(p->left) + 1;
        int rightHeight = getHeight(p->right) + 1;

        return leftHeight > rightHeight ? leftHeight : rightHeight;
    }
};