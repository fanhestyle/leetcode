#pragma once

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 *  前序遍历的反向操作，前序遍历是 中左右
 *  后续遍历是 左右中，我们反向一下，操作过程使用 右左中，那么结果就是反的
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
            result.push_back(topNode->val);

            if (topNode->left)
            {
                stk.push(topNode->left);
            }

            if (topNode->right)
            {
                stk.push(topNode->right);
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};