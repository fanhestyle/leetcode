#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_map<TreeNode*, int> saveMap;

public:
    int rob(TreeNode* root)
    {
        if (!root)
            return 0;
        if (saveMap.count(root))
            return saveMap[root];

        //抢
        int rob_root_val =
            root->val +
            (root->left ? rob(root->left->left) + rob(root->left->right) : 0) +
            (root->right ? rob(root->right->left) + rob(root->right->right)
                         : 0);
        int not_rob_root_val = rob(root->left) + rob(root->right);

        int choice = max(rob_root_val, not_rob_root_val);
        saveMap[root] = choice;

        return choice;
    }
};