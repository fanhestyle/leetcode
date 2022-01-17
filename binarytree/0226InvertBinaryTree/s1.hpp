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
    TreeNode* invertTree(TreeNode* root)
    {
        if (nullptr == root)
            return nullptr;

        TreeNode* rightChild = invertTree(root->right);
        TreeNode* leftChild = invertTree(root->left);

        root->left = rightChild;
        root->right = leftChild;

        return root;
    }
};