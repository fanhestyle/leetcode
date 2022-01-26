#include "s1.hpp"

// TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)

#define null 0

int main()
{
    Solution s;
    TreeNode *r, *e;
    vector<int> inorder;
    vector<int> postorder;

    {
        inorder = {9, 3, 15, 20, 7};
        postorder = {9, 15, 7, 20, 3};
        r = s.buildTree(inorder, postorder);
        vector<int> et = {3, 9, 20, null, null, 15, 7};
        e = createTree(et);
        assert(isTreeEqual(r, e));
    }

    {
        postorder = {-1};
        inorder = {-1};
        r = s.buildTree(inorder, postorder);
        vector<int> et = {-1};
        e = createTree(et);
        assert(isTreeEqual(r, e));
    }

    cout << "PASS!" << endl;
}