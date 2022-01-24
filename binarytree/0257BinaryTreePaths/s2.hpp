#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> binaryTreePaths(TreeNode* root)
    {
        if (!root)
            return {};

        vector<string> result;
        vector<int> r;
        dfs(result, root, r);
        return result;
    }

    void dfs(vector<string>& result, TreeNode* root, vector<int>& track)
    {
        if (!root)
            return;

        if (!root->left && !root->right)
        {
            track.push_back(root->val);
            result.push_back(getResult(track));
            track.pop_back();
            return;
        }

        track.push_back(root->val);
        dfs(result, root->left, track);
        dfs(result, root->right, track);
        track.pop_back();
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