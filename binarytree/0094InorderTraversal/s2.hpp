#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
s2：按照递归思路实现的非递归方式（使用显式栈代替递归的隐式栈）
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
    void pushLeftChild(TreeNode* p, stack<TreeNode*>& stk)
    {
        while (p)
        {
            stk.push(p);
            p = p->left;
        }
    }

    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;

        TreeNode* p = root;
        stack<TreeNode*> stk;

        pushLeftChild(p, stk);

        while (!stk.empty())
        {
            TreeNode* topNode = stk.top();
            stk.pop();
            result.push_back(topNode->val);

            if (topNode->right)
            {
                pushLeftChild(topNode->right, stk);
            }
        }

        return result;
    }
};