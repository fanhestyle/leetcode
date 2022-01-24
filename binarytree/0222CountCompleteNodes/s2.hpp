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

        TreeNode* leftChild = root->left;
        int leftLevel = 0;
        while (leftChild)
        {
            leftChild = leftChild->left;
            leftLevel++;
        }
        TreeNode* rightChild = root->right;
        int rightLevel = 0;
        while (rightChild)
        {
            rightChild = rightChild->right;
            rightLevel++;
        }

        if (leftLevel == rightLevel)
        {
            return (2 << leftLevel) - 1;
        }
        else
        {
            int leftCnt = countNodes(root->left);
            int rightCnt = countNodes(root->right);

            return 1 + leftCnt + rightCnt;
        }
    }
};