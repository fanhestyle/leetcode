#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

/*
BFS traversal
*/

class Solution
{
public:
    int findBottomLeftValue(TreeNode* root)
    {
        if (!root)
            return -1;

        queue<TreeNode*> que;

        if (root)
            que.push(root);

        TreeNode* candidate = root;

        while (!que.empty())
        {
            int sz = que.size();
            bool isFound = false;
            for (int j = 0; j < sz; j++)
            {
                TreeNode* topNode = que.front();
                que.pop();
                if (topNode->left)
                {
                    que.push(topNode->left);
                    if (!isFound)
                    {
                        candidate = topNode->left;
                        isFound = true;
                    }
                }
                if (topNode->right)
                {
                    que.push(topNode->right);
                    if (!isFound && topNode->left == nullptr)
                    {
                        candidate = topNode->right;
                        isFound = true;
                    }
                }
            }
        }

        return candidate->val;
    }
};