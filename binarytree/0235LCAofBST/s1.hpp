#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (!root)
            return nullptr;

        if (p == root)
            return p;
        else if (q == root)
            return q;

        TreeNode* tmp = root;
        while (tmp)
        {
            if (tmp->val < p->val && tmp->val < q->val)
            {
                tmp = tmp->right;
            }
            else if (tmp->val > p->val && tmp->val > q->val)
            {
                tmp = tmp->left;
            }
            else
                return tmp;
        }

        return nullptr;
    }
};