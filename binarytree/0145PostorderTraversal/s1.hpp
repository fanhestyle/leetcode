#pragma once

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */

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
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int> r;
        dfs(root, r);
        return r;
    }

    void dfs(TreeNode* root, vector<int>& result)
    {
        if (nullptr == root)
            return;

        dfs(root->left, result);
        dfs(root->right, result);
        result.push_back(root->val);
    }
};