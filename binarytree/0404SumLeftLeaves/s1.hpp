#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

//top-down(前序)

class Solution
{
public:
    int sumOfLeftLeaves(TreeNode* root)
    {
        if (!root)
            return 0;

        if (root->left && !root->left->left && !root->left->right)
            return root->left->val + sumOfLeftLeaves(root->right);

        int leftSum = sumOfLeftLeaves(root->left);
        int rightSum = sumOfLeftLeaves(root->right);

        return leftSum + rightSum;
    }
};