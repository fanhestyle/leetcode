#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubtree(TreeNode* s, TreeNode* t)
    {
        if (!s)
            return false;
        if (isSame(s, t))
            return true;

        return isSubtree(s->left, t) || isSubtree(s->right, t);
    }

    // bool isSubtree(TreeNode* root, TreeNode* subRoot)
    // {
    //     if (root == nullptr)
    //         return subRoot == nullptr;
    //     if (isSameTree(root, subRoot))
    //         return true;
    //     return isSameTree(root->left, subRoot) ||
    //            isSameTree(root->right, subRoot);
    // }

    bool isSame(TreeNode* s, TreeNode* t)
    {
        if (!s && !t)
            return true;
        if (!s || !t)
            return false;
        if (s->val != t->val)
            return false;

        return isSame(s->left, t->left) && isSame(s->right, t->right);
    }
    // // bool isSameTree(TreeNode* p, TreeNode* q)
    // // {
    // //     if (!p && !q)
    // //         return true;
    // //     if (!p && q)
    // //         return false;
    // //     if (p && !q)
    // //         return false;
    // //     if (p->val != q->val)
    // //         return false;
    // //     return isSameTree(p->left, q->left) && isSameTree(p->right,
    // //     q->right);
    // // }

    // bool isSameTree(TreeNode* p, TreeNode* q)
    // {
    //     if (!p && !q)
    //         return true;

    //     if (p && !q)
    //         return false;

    //     if (!p && q)
    //         return false;

    //     if (p->val != q->val)
    //     {
    //         return false;
    //     }
    //     else
    //     {
    //         return isSameTree(p->left, q->left) &&
    //                isSameTree(p->right, q->right);
    //     }
    // }
};