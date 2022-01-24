#pragma once

#include <bits/stdc++.h>
#include "../../testutils/binarytree_utils.hpp"
using namespace std;

// struct TreeNode
// {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode* left, TreeNode* right)
//         : val(x), left(left), right(right)
//     {
//     }
// };

class Solution
{
public:
    int maxDepth(TreeNode* root)
    {
        if (!root)
            return 0;

        int leftMax = maxDepth(root->left) + 1;
        int rightMax = maxDepth(root->right) + 1;

        return leftMax > rightMax ? leftMax : rightMax;
    }
};