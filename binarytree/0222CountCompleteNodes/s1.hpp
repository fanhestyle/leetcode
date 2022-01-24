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

        int leftCnt = countNodes(root->left);
        int rightCnt = countNodes(root->right);

        return 1 + leftCnt + rightCnt;
    }
};