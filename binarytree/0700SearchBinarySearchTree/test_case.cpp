//#include "s1.hpp"
#include "s2.hpp"
// TreeNode* searchBST(TreeNode* root, int val)

int main()
{
    Solution s;
    TreeNode* root;
    int val;
    TreeNode *r, *e;

    {
        vector<int> t = {4, 2, 7, 1, 3};
        root = createTree(t);
        val = 2;
        vector<int> te = {2, 1, 3};
        e = createTree(te);
        r = s.searchBST(root, val);
        assert(isTreeEqual(r, e));
    }

    cout << "PASS!" << endl;
}