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
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        vector<vector<int>> r;
        dfs(root, 0, r);
        return r;
    }

    void dfs(TreeNode* node, int level, vector<vector<int>>& r)
    {
        if (!node)
            return;
        if (level >= r.size())
            r.insert(r.begin(), vector<int>());
        r[r.size() - level - 1].push_back(node->val);
        dfs(node->left, level + 1, r);
        dfs(node->right, level + 1, r);
    }
};
