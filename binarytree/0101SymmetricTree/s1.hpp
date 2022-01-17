#include <bits/stdc++.h>
using namespace std;

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
    bool isSymmetric(TreeNode* root)
    {
        if (!root)
            return false;

        vector<vector<int>> r;
        getLevel(root, 0, r);

        for (int i = 0; i < r.size(); i++)
        {
            if (!isVectorSymmetic(r[i]))
                return false;
        }
        return true;
    }

    bool isVectorSymmetic(vector<int>& v)
    {
        int i = 0;
        int j = v.size() - 1;
        while (i < j)
        {
            if (v[i] != v[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    void getLevel(TreeNode* root, int level, vector<vector<int>>& r)
    {
        if (!root)
        {
            if (level >= r.size())
            {
                r.push_back(vector<int>());
            }
            r[level].push_back(-200);
            return;
        }

        if (level >= r.size())
        {
            r.push_back(vector<int>());
        }

        r[level].push_back(root->val);

        getLevel(root->left, level + 1, r);
        getLevel(root->right, level + 1, r);
    }
};