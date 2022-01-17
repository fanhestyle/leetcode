#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
s3：Morris InOrder Algorithm
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
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;

        stack<TreeNode*> stk;
        if (root)
            stk.push(root);

        while (!stk.empty())
        {
            TreeNode* topNode = stk.top();
            stk.pop();

            if (topNode != NULL)
            {
                if (topNode->right)
                    stk.push(topNode->right);

                stk.push(topNode);
                stk.push(NULL);

                if (topNode->left)
                    stk.push(topNode->left);
            }
            else
            {
                TreeNode* tobeProcessNode = stk.top();
                stk.pop();
                result.push_back(tobeProcessNode->val);
            }
        }

        return result;
    }
};