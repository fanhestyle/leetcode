#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* trimBST(TreeNode* root, int low, int high)
    {
        if (!root)
            return nullptr;

        while (root)
        {
            if (root->val < low)
            {
                root = root->right;
            }
            else if (root->val > high)
            {
                root = root->left;
            }
            else
            {
            }
        }

        return root;
    }
};