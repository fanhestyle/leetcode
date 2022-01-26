#include <queue>
#include <vector>

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

TreeNode* createTree(const std::vector<int>& v, int null_value = 0)
{
    if (v.empty())
        return nullptr;

    std::queue<TreeNode*> q1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != null_value)
            q1.push(new TreeNode(v[i]));
        else
            q1.push(nullptr);
    }

    std::queue<TreeNode*> nodeQueue;
    nodeQueue.push(new TreeNode(v[0]));

    TreeNode* root = nodeQueue.front();

    while (!nodeQueue.empty() && !q1.empty())
    {
        TreeNode* topItem = nodeQueue.front();
        nodeQueue.pop();
        TreeNode* left = q1.front();
        q1.pop();
        TreeNode* right = nullptr;
        if (!q1.empty())
        {
            right = q1.front();
            q1.pop();
        }
        topItem->left = left;
        topItem->right = right;
        if (left)
            nodeQueue.push(left);
        if (right)
            nodeQueue.push(right);
    }

    return root;
}

/*
TreeNode* createTree(const std::vector<int>& v)
{
    std::vector<TreeNode*> treeNodeVector;
    treeNodeVector.resize(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            treeNodeVector[i] = new TreeNode(v[i]);
        }
        else
        {
            treeNodeVector[i] = nullptr;
        }
    }

    for (int i = 0; 2 * i + 2 < v.size(); i++)
    {
        if (treeNodeVector[i])
        {
            treeNodeVector[i]->left = treeNodeVector[2 * i + 1];
            treeNodeVector[i]->right = treeNodeVector[2 * i + 2];
        }
    }

    return treeNodeVector[0];
}
*/

bool isTreeEqual(TreeNode* v, TreeNode* w)
{
    if (!v && !w)
        return true;
    else if (!v || !w)
        return false;
    else if (v->val != w->val)
        return false;
    else
    {
        return isTreeEqual(v->left, w->left) && isTreeEqual(v->right, w->right);
    }
}