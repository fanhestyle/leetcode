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

        if (root->val < low)
        {
            TreeNode* right = trimBST(root->right, low, high);
            root = right;
        }
        else if (root->val > high)
        {
            TreeNode* left = trimBST(root->left, low, high);
            root = left;
        }
        else
        {
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
        }

        return root;
    }
};