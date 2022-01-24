#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidBST(TreeNode* root)
    {
        return validateBST(root, nullptr, nullptr);
    }

    bool validateBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode)
    {
        if (!root)
            return true;

        if (minNode != nullptr && minNode->val >= root->val)
            return false;
            
        if (maxNode != nullptr && maxNode->val <= root->val)
            return false;

        bool isLeftValid = validateBST(root->left, minNode, root);
        bool isRightValid = validateBST(root->right, root, maxNode);

        return isLeftValid && isRightValid;
    }
};