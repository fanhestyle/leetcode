#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* insertIntoBST(TreeNode* root, int val)
    {
        if (!root)
        {
            return new TreeNode(val);
        }

        TreeNode* p = root;
        TreeNode* prev = root;
        while (p)
        {
            prev = p;
            if (p->val < val)
            {
                p = p->right;
            }
            else if (p->val > val)
            {
                p = p->left;
            }
        }
        TreeNode *newNode = new TreeNode(val);
        prev->val > val ? prev->left = newNode : prev->right = newNode;

        return root;
    }
};