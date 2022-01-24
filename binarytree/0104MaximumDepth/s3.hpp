#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(TreeNode* root)
    {
        if (!root)
            return 0;

        std::queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);

        int level = 0;

        while (!nodeQueue.empty())
        {
            level = level + 1;
            int sz = nodeQueue.size();

            for (int i = 0; i < sz; i++)
            {
                TreeNode* topItem = nodeQueue.front();
                if (topItem->left)
                    nodeQueue.push(topItem->left);
                if (topItem->right)
                    nodeQueue.push(topItem->right);

                nodeQueue.pop();
            }
        }

        return level;
    }
};