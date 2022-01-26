#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int v;

public:
    TreeNode* convertBST(TreeNode* root)
    {
        v = 0;
        traverse(root);
        return root;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;

        traverse(root->right);
        v = root->val + v;
        root->val = v;

        traverse(root->left);
    }
};