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
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        vector<vector<int>> result;
        queue<TreeNode*> que;
        if (root)
        {
            que.push(root);
        }

        while (!que.empty())
        {
            vector<int> oneLevelResult;

            int sz = que.size();

            for (int i = 0; i < sz; i++)
            {
                TreeNode* fNode = que.front();
                que.pop();
                oneLevelResult.push_back(fNode->val);

                if (fNode->left)
                    que.push(fNode->left);
                if (fNode->right)
                    que.push(fNode->right);
                
            }
            result.push_back(oneLevelResult);
        }

        reverse(result.begin(), result.end());

        return result;
    }
};