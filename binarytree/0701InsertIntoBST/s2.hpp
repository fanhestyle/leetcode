#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* insertIntoBST(TreeNode* root, int val)
    {
        insert(root, val);
        return root;
    }

    void insert(TreeNode*& root, int val)
    {
        if (!root)
        {
            root = new TreeNode(val);
            return;
        }

        if (val < root->val)
        {
            insertIntoBST(root->left, val);
        }
        else if (val > root->val)
        {
            insertIntoBST(root->right, val);
        }

        root = new TreeNode(val);
    }
};