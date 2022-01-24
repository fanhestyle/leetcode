#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int minDiff;
    int prev;

public:
    int getMinimumDifference(TreeNode* root)
    {
        minDiff = INT_MAX;
        prev = INT_MIN;
        traverse(root);
        return minDiff;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;

        traverse(root->left);

        int diff = abs(root->val - prev);
        if (diff < minDiff)
            minDiff = diff;
        prev = root->val;
        traverse(root->right);
    }
};