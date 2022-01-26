#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        unordered_map<int, TreeNode*> valueNodeTable;
        valueNodeTable[root->val] = nullptr;
        unordered_map<int, bool> visited;

        dfs(root, valueNodeTable);

        while (p != nullptr)
        {
            visited[p->val] = true;
            p = valueNodeTable[p->val];
        }

        while (q != nullptr)
        {
            if (visited[q->val])
                return q;
            q = valueNodeTable[q->val];
        }

        return nullptr;
    }

    void dfs(TreeNode* root, unordered_map<int, TreeNode*>& valueNodeHashTable)
    {
        if (!root)
            return;

        if (root->left)
        {
            valueNodeHashTable[root->left->val] = root;
            dfs(root->left, valueNodeHashTable);
        }

        if (root->right)
        {
            valueNodeHashTable[root->right->val] = root;
            dfs(root->right, valueNodeHashTable);
        }
    }
};