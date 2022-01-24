#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;


//Bottom-down Postorder

class Solution
{
private:
    int sum;

public:
    int sumOfLeftLeaves(TreeNode* root)
    {
        sum = 0;
        traverse(root);
        return sum;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;

        traverse(root->left);
        if (root->left && !root->left->left && !root->left->right)
            sum += root->left->val;
        traverse(root->right);
    }
};
