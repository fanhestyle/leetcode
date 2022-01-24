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
        queue<TreeNode*> que;
        if (root)
        {
            que.push(root->left);
            que.push(root->right);
        }

        while (!que.empty())
        {
            TreeNode* leftItem = que.front();
            que.pop();
            TreeNode* rightItem = que.front();
            que.pop();

            if (getValue(leftItem) != getValue(rightItem))
                return false;

            if (leftItem)
                que.push(leftItem->left);
            if (rightItem)
                que.push(rightItem->right);
            if (leftItem)
                que.push(leftItem->right);
            if (rightItem)
                que.push(rightItem->left);
        }

        return true;
    }

    int getValue(TreeNode* n) { return n == nullptr ? -200 : n->val; }
};