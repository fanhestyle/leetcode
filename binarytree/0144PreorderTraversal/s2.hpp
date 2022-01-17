#pragma once

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right)
    {
    }
};

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode* root)
    {
        if (nullptr == root)
            return {};

        vector<int> result;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty())
        {
            TreeNode* topNode = st.top();
            st.pop();

            if (topNode)
            {
                result.push_back(topNode->val);

                if (topNode->right)
                    st.push(topNode->right);

                if (topNode->left)
                    st.push(topNode->left);
            }
        }

        return result;
    }
};