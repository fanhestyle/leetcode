#pragma once

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * 标记法
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
        TreeNode* cur = root;

        stack<TreeNode*> stk;
        vector<int> result;

        if (root)
            stk.push(root);

        while (!stk.empty())
        {
            TreeNode* topNode = stk.top();
            stk.pop();

            if (topNode)
            {
                stk.push(topNode);
                stk.push(nullptr);

                if (topNode->right)
                    stk.push(topNode->right);

                if (topNode->left)
                    stk.push(topNode->left);
            }
            else
            {
                result.push_back(stk.top()->val);
                stk.pop();
            }
        }

        return result;
    }
};