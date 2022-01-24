#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* searchBST(TreeNode* root, int val)
    {
        TreeNode* p = root;

        while (p)
        {
            if (p->val == val)
                return p;
            else if (p->val > val)
                p = p->left;
            else
                p = p->right;
        }
        return p;
    }
};