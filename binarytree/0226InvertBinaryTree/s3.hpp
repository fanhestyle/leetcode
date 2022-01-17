#pragma once

#include <bits/stdc++.h>
using namespace std;

// BFS

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
    TreeNode* invertTree(TreeNode* root)
    {
        queue<TreeNode*> que;

        if (root)
        {
            que.push(root);
        }

        while (!que.empty())
        {
            TreeNode* topItem = que.front();
            que.pop();

            TreeNode* tmp = topItem->left;
            topItem->left = topItem->right;
            topItem->right = tmp;

            if (topItem->left)
                que.push(topItem->left);
            if (topItem->right)
                que.push(topItem->right);
        }

        return root;
    }
};