#pragma once

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right)
    {
    }
};

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;
        inorderTraversal_impl(root, result);
        return result;
    }

    void inorderTraversal_impl(TreeNode* p, vector<int>& result)
    {
        if (!p)
            return;

        inorderTraversal_impl(p->left, result);
        result.push_back(p->val);
        inorderTraversal_impl(p->right, result);
    }
};