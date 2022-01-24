#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

/*
Bottom-up
*/

class Solution
{
public:
    bool isBalanced(TreeNode* root)
    {
        if (getHeight(root) != -1)
            return true;
        return false;
    }

    int getHeight(TreeNode* root)
    {
        if (!root)
            return 0;

        int hl = getHeight(root->left);

        if (hl == -1)
            return -1;

        int hr = getHeight(root->right);

        if (hr == -1)
            return -1;

        if (abs(hl - hr) > 1)
        {
            return -1;
        }
        else
        {
            return 1 + ((hl > hr) ? hl : hr);
        }
    }
};