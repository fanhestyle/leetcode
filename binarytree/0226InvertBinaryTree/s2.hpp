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

        TreeNode* cur = root;
        stack<TreeNode*> stk;
        traverseLeftChild(cur, stk);

        while (!stk.empty())
        {
            TreeNode* topNode = stk.top();
            stk.pop();

            if (topNode->right)
            {
                traverseLeftChild(topNode->right, stk);
            }
        }

        return root;
    }

    void traverseLeftChild(TreeNode* node, stack<TreeNode*>& stk)
    {
        while (node)
        {
            stk.push(node);
            swapNode(node);
            node = node->left;
        }
    }

    void swapNode(TreeNode* node)
    {
        TreeNode* tmp = node->left;
        node->left = node->right;
        node->right = tmp;
    }
};