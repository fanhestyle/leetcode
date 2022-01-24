#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    long long maxValue = LONG_MIN;
    bool isValid;

public:
    bool isValidBST(TreeNode* root)
    {
        isValid = true;
        traverse(root);
        return isValid;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;

        traverse(root->left);

        if (maxValue >= root->val)
        {
            isValid = false;
            return;
        }
        if (maxValue < root->val)
            maxValue = root->val;

        traverse(root->right);
    }
};