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
    //把parentNode的左子节点压栈
    void pushAllLeftChild(stack<TreeNode*>& stk, vector<int>& result,
                          TreeNode* parent)
    {
        while (parent)
        {
            //前序位置：进入一个节点前的操作
            result.push_back(parent->val);
            stk.push(parent);
            parent = parent->left;
        }
    }

    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int> result;

        TreeNode* visited = new TreeNode(-1);

        stack<TreeNode*> nodeStack;
        pushAllLeftChild(nodeStack, result, root);

        while (!nodeStack.empty())
        {
            TreeNode* p = nodeStack.top();

            if ((p->left == nullptr || p->left == visited) &&
                p->right != visited)
            {
                //中序代码
                pushAllLeftChild(nodeStack, result, p->right);
            }

            if (p->right == nullptr)
            {
                visited = nodeStack.top();
                nodeStack.pop();
            }

            if (p->right == visited)
            {
                visited = nodeStack.top();
                nodeStack.pop();
            }
        }

        return result;
    }
};