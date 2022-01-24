#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    unordered_map<int, int> keyHash;

public:
    vector<int> findMode(TreeNode* root)
    {
        vector<int> result;
        keyHash.clear();
        traverse(root);
        int cnt = INT_MIN;
        for (auto it = keyHash.begin(); it != keyHash.end(); ++it)
        {
            if (cnt < it->second)
                cnt = it->second;
        }
        for (auto it = keyHash.begin(); it != keyHash.end(); ++it)
        {
            if (it->second == cnt)
                result.push_back(it->first);
        }
        return result;
    }

    void traverse(TreeNode* root)
    {
        if (!root)
            return;
        traverse(root->left);
        keyHash[root->val]++;
        traverse(root->right);
    }
};