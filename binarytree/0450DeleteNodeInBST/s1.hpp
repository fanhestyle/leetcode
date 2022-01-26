#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        dfs(root, key);
        return root;
    }

    void dfs(TreeNode*& root, int key)
    {
        if (!root)
            return;

        if (root->val < key)
            dfs(root->right, key);
        else if (root->val > key)
            dfs(root->left, key);
        else
        {
            if (root->left && root->right)
            {
                TreeNode* tmp = root->left;
                while (tmp->right)
                {
                    tmp = tmp->right;
                }
                int v = root->val;
                root->val = tmp->val;
                tmp->val = v;

                dfs(root->left, key);
            }
            else
            {
                TreeNode* tmp = root;
                root = root->left ? root->left : root->right;
                delete tmp;
            }
        }
    }
};