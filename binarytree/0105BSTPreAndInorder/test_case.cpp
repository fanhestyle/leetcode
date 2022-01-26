#include "s1.hpp"

// TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
#define null 0

int main()
{
    Solution s;
    TreeNode *r, *e;
    vector<int> preorder;
    vector<int> inorder;

    {
        preorder = {3, 9, 20, 15, 7};
        inorder = {9, 3, 15, 20, 7};
        r = s.buildTree(preorder, inorder);
        vector<int> et = {3, 9, 20, null, null, 15, 7};
        e = createTree(et);
        assert(isTreeEqual(r, e));
    }

    {
        preorder = {-1};
        inorder = {-1};
        r = s.buildTree(preorder, inorder);
        vector<int> et = {-1};
        e = createTree(et);
        assert(isTreeEqual(r, e));
    }

    cout << "PASS!" << endl;
}