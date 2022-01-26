#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root == nullptr)
            return nullptr;
        if (root == p || root == q)
            return root;

        TreeNode* leftNode = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightNode = lowestCommonAncestor(root->right, p, q);

        if (leftNode == nullptr && rightNode == nullptr)
        {
            return nullptr;
        }
        if (leftNode == nullptr && rightNode != nullptr)
        {
            return rightNode;
        }
        if (leftNode != nullptr && rightNode == nullptr)
        {
            return leftNode;
        }
        if (leftNode != nullptr && rightNode != nullptr)
            return root;
    }
};