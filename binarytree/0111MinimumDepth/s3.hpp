#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int minDepth(TreeNode* root)
    // {
    //     if (!root)
    //         return 0;

    //     queue<TreeNode*> que;
    //     int depth = 0;
    //     que.push(root);

    //     while (!que.empty())
    //     {
    //         int sz = que.size();

    //         bool isLeaf = false;

    //         for (int i = 0; i < sz; i++)
    //         {
    //             TreeNode* topItem = que.front();
    //             que.pop();

    //             if (!topItem->left && !topItem->right)
    //                 isLeaf = true;
    //             else
    //             {
    //                 if (topItem->left)
    //                     que.push(topItem->left);
    //                 if (topItem->right)
    //                     que.push(topItem->right);
    //             }
    //         }
    //         if (isLeaf)
    //             return depth + 1;
    //         else
    //             depth++;
    //     }

    //     return depth;
    // }

    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int depth = 0;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()) {
            int size = que.size();
            depth++; // 记录最小深度
            for (int i = 0; i < size; i++) {
                TreeNode* node = que.front();
                que.pop();
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
                if (!node->left && !node->right) { // 当左右孩子都为空的时候，说明是最低点的一层了，退出
                    return depth;
                }
            }
        }
        return depth;
    }
};
