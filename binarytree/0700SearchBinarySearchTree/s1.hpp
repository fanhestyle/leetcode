#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* searchBST(TreeNode* root, int val)
    {
        if (!root)
            return nullptr;

        if (val == root->val)
            return root;

        if (root->val > val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);

        return nullptr;
    }
};