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

        int level = 0;
        TreeNode* p = root;

        while (p)
        {
            ++level;
            p = p->left;
        }

        int low = (1 << (level - 1));
        int high = (1 << level) - 1;
        int mid;

        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (isExist(root, level, mid))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return low - 1;
    }

    bool isExist(TreeNode* root, int level, int v)
    {
        int k = (1 << (level - 1));
        k >>= 1;

        TreeNode* p = root;

        while (k > 0)
        {
            if (k & v)
            {
                p = p->right;
            }
            else
            {
                p = p->left;
            }

            k >>= 1;
        }

        return p;
    }
};