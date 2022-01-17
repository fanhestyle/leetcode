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
        TreeNode* curNode = root;

        while (curNode != nullptr)
        {
            if (curNode->left == nullptr)
            {
                result.push_back(curNode->val);
                curNode = curNode->right;
            }
            else
            {
                TreeNode* p = curNode->left;

                while (p->right != nullptr && p->right != curNode)
                {
                    p = p->right;
                }

                if (p->right == nullptr)
                {
                    p->right = curNode;
                    curNode = curNode->left;
                }
                else
                {
                    result.push_back(curNode->val);
                    curNode = curNode->right;
                    p->right = nullptr;
                }
            }
        }

        return result;
    }
};