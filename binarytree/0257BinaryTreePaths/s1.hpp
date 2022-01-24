#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> result;

        if (!root)
            return result;

        vector<int> track;
        dfs(root, result, track);
        return result;
    }

    void dfs(TreeNode* root, vector<string>& result, vector<int>& s)
    {
        s.push_back(root->val);

        if (!root->left && !root->right)
        {
            result.push_back(getResult(s));
            return;
        }

        if (root->left)
        {
            dfs(root->left, result, s);
            s.pop_back();
        }

        if (root->right)
        {
            dfs(root->right, result, s);
            s.pop_back();
        }
    }

    string getResult(const vector<int>& vec)
    {
        string str;
        for (int i = 0; i < vec.size() - 1; i++)
        {
            str += to_string(vec.at(i));
            str += "->";
        }
        str += to_string(vec.at(vec.size() - 1));
        return str;
    }
};