#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if (!root)
            return nullptr;

        TreeNode* prev = nullptr;
        TreeNode* p = root;

        while (p)
        {
            prev = p;
            if (p->val < key)
            {
                p = p->right;
            }
            else if (p->val > key)
            {
                p = p->left;
            }
            else
            {
                if (p->left && p->right)
                {
                    
                }
                else if (p->left && !p->right)
                {
                    if (prev->val > p->val)
                    {
                        prev->left = p->left;
                    }
                    else
                    {
                        prev->right = p->left;
                    }
                }
                else if (p->right && !p->left)
                {
                    if (prev->val > p->val)
                    {
                        prev->left = p->right;
                    }
                    else
                    {
                        prev->right = p->left;
                    }
                }
                else
                {
                    if (prev->val > p->val)
                    {
                        prev->left = nullptr;
                    }
                    else
                    {
                        prev->right = nullptr;
                    }
                }
            }
        }

        return root;
    }
};