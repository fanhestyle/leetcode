#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        return createSubTree(preorder, inorder, 0, preorder.size() - 1, 0,
                             inorder.size() - 1);
    }

    TreeNode* createSubTree(vector<int>& preorder, vector<int>& inorder,
                            int preLow, int preHigh, int inLow, int inHigh)
    {
        if (inLow > inHigh)
            return nullptr;

        int rootValue = preorder[preLow];
        int mid;
        for (int i = inLow; i <= inHigh; i++)
        {
            if (rootValue == inorder[i])
            {
                mid = i;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootValue);
        root->left = createSubTree(preorder, inorder, preLow + 1,
                                   preLow + mid - inLow, inLow, mid - 1);
        root->right = createSubTree(preorder, inorder, preLow + mid - inLow + 1,
                                    preHigh, mid + 1, inHigh);

        return root;
    }
};