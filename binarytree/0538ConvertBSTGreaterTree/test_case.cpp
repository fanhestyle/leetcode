#include "s1.hpp"

// TreeNode* convertBST(TreeNode* root)

#define null -1000

int main()
{
    Solution s;
    TreeNode* root;
    TreeNode *e, *r;
    vector<int> t, te;

    {
        t = {4, 1, 6, 0, 2, 5, 7, null, null, null, 3, null, null, null, 8};
        te = {30,   36,   21, 36,   35,   26,   15, null,
              null, null, 33, null, null, null, 8};
        root = createTree(t, null);
        e = createTree(te, null);
        r = s.convertBST(root);

        assert(isTreeEqual(r, e));
    }

    cout << "PASS!" << endl;

}