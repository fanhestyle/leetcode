#pragma once

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * Morris-postorder-traversal
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
        vector<int> result;

        // dummy node -1
        TreeNode* dummy = new TreeNode(-1);
        TreeNode* cur = dummy;
        cur->left = root;

        while (cur != nullptr)
        {
            if (cur->left == nullptr)
            {
                cur = cur->right;
            }
            else
            {
                TreeNode* p = cur->left;

                while (p->right != nullptr && p->right != cur)
                {
                    p = p->right;
                }

                if (p->right == nullptr)
                {
                    p->right = cur;
                    cur = cur->left;
                }
                else // p->right == cur
                {
                    p->right = nullptr;

                    TreeNode* head = cur->left;
                    TreeNode* tail = p;

                    TreeNode* x = head;
                    TreeNode* y = nullptr;
                    while (x)
                    {
                        TreeNode* tmp = x->right;
                        x->right = y;
                        y = x;
                        x = tmp;
                    }

                    //边输出边反转（y前x后）
                    while (y)
                    {
                        result.push_back(y->val);
                        TreeNode* tmp = y->right;
                        y->right = x;
                        x = y;
                        y = tmp;
                    }

                    cur = cur->right;
                }
            }
        }
        delete dummy;
        return result;
    }
};