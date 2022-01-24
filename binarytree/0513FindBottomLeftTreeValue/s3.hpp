#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

// top-down

class Solution
{
private:
    int leftistVal;
    int maxDepth;
    int curDepth;

public:
    int findBottomLeftValue(TreeNode* root)
    {
        if (!root)
            return -1;

        maxDepth = -1;
        curDepth = 0;
        traverse(root);
        return leftistVal;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;

        ++curDepth;
        if (curDepth > maxDepth)
        {
            maxDepth = curDepth;
            leftistVal = root->val;
        }
        traverse(root->left);
        traverse(root->right);
        --curDepth;
    }
};