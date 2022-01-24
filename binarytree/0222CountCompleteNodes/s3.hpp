#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNodes(TreeNode* root)
    {
        if (!root)
            return 0;

        queue<TreeNode*> stk;
        stk.push(root);

        int sum = 0;

        while (!stk.empty())
        {
            TreeNode* topItem = stk.front();
            int cnt = 0;
            if (isPerfectTree(topItem, cnt))
            {
                sum += cnt;
            }
            else
            {
                TreeNode* lchild = topItem->left;
                TreeNode* rchild = topItem->right;

                if (isPerfectTree(lchild, cnt))
                {
                    sum += cnt;
                }
                else
                {
                    stk.push(lchild);
                }

                if (isPerfectTree(rchild, cnt))
                {
                    sum += cnt;
                }
                else
                {
                    stk.push(rchild);
                }
                ++sum;
            }

            stk.pop();
        }

        return sum;
    }

    bool isPerfectTree(TreeNode* node, int& cnt)
    {
        if (!node)
        {
            cnt = 0;
            return true;
        }

        int leftLevel = 0;
        int rightLevel = 0;

        TreeNode* pL = node->left;

        while (pL)
        {
            leftLevel++;
            pL = pL->left;
        }

        TreeNode* pR = node->right;
        while (pR)
        {
            rightLevel++;
            pR = pR->right;
        }

        if (leftLevel == rightLevel)
        {
            cnt = (2 << leftLevel) - 1;
            return true;
        }
        return false;
    }
};