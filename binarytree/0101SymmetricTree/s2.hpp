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
            return true;
        return isEqual(root->left, root->right);
    }

    bool isEqual(TreeNode* lhs, TreeNode* rhs)
    {
        if (!lhs && !rhs)
            return true;
        else if (!lhs || !rhs)
            return false;
        else if (lhs->val != rhs->val)
            return false;
        else
        {
            return isEqual(lhs->right, rhs->left) &&
                   isEqual(lhs->left, rhs->right);
        }
    }
};