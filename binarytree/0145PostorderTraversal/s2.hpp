#pragma once

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 *  模拟递归的显式栈迭代
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
    void pushAllLeftChild(TreeNode* p, stack<TreeNode*>& stk)
    {
        while (p)
        {
            stk.push(p);
            p = p->left;
        }
    }

    vector<int> postorderTraversal(TreeNode* root)
    {
        TreeNode* cur = root;
        TreeNode* visitedNode = nullptr;
        
        stack<TreeNode*> stk;
        pushAllLeftChild(root, stk);
        vector<int> result;

        while (!stk.empty())
        {
            TreeNode* topNode = stk.top();

            if ((topNode->left == nullptr || topNode->left == visitedNode) &&
                (topNode->right != visitedNode))
            {
                // Root Node Process
                pushAllLeftChild(topNode->right, stk);
            }

            if (topNode->right == nullptr || topNode->right == visitedNode)
            {
                result.push_back(topNode->val);
                visitedNode = topNode;
                stk.pop();
            }
        }

        return result;
    }
};