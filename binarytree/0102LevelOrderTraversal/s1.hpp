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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> result;

        queue<TreeNode*> nodeQueue;

        if (root)
        {
            nodeQueue.push(root);
            nodeQueue.push(nullptr);
        }

        while (!nodeQueue.empty())
        {
            vector<int> levelResult;
            while (nodeQueue.front() != nullptr)
            {
                TreeNode* frontNode = nodeQueue.front();
                levelResult.push_back(frontNode->val);
                nodeQueue.pop();

                if (frontNode->left)
                {
                    nodeQueue.push(frontNode->left);
                }
                if (frontNode->right)
                {
                    nodeQueue.push(frontNode->right);
                }
            }
            nodeQueue.pop();    

            if (!levelResult.empty())
            {
                result.push_back(levelResult);
                nodeQueue.push(nullptr);
            }
        }

        return result;
    }
};