#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
        return build(inorder, postorder, 0, inorder.size() - 1, 0,
                     postorder.size() - 1);
    }

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int inLow,
                    int inHigh, int postLow, int postHigh)
    {
        if (inLow > inHigh)
            return nullptr;

        int rootVal = postorder[postHigh];

        int rootIndex;
        for (int i = inLow; i <= inHigh; i++)
        {
            if (inorder[i] == rootVal)
            {
                rootIndex = i;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootVal);

        root->left = build(inorder, postorder, inLow, rootIndex - 1, postLow,
                           postLow + rootIndex - inLow - 1);
        root->right = build(inorder, postorder, rootIndex + 1, inHigh,
                            postLow + rootIndex - inLow, postHigh - 1);

        return root;
    }
};