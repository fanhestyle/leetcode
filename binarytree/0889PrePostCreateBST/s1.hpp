#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* constructFromPrePost(vector<int>& preorder,
                                   vector<int>& postorder)
    {
        return build(preorder, postorder, 0, preorder.size() - 1, 0,
                     postorder.size() - 1);
    }

    TreeNode* build(vector<int>& preorder, vector<int>& postorder, int pre_low,
                    int pre_high, int post_low, int post_high)
    {
        if (pre_low > pre_high)
            return nullptr;

        if (pre_low == pre_high)
        {
            return new TreeNode(preorder[pre_high]);
        }

        int rootVal = preorder[pre_low];
        int leftRootVal = preorder[pre_low + 1];

        int leftIndex;
        for (int i = post_low; i <= post_high; i++)
        {
            if (postorder[i] == leftRootVal)
            {
                leftIndex = i;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootVal);

        root->left =
            build(preorder, postorder, pre_low + 1,
                  pre_low + leftIndex - post_low + 1, post_low, leftIndex);
        root->right =
            build(preorder, postorder, pre_low + leftIndex - post_low + 2,
                  pre_high, leftIndex + 1, post_high - 1);

        return root;
    }
};