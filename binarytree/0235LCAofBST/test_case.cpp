#include "s1.hpp"
//#include "s2.hpp"

#define null 0

// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)

int main()
{
    Solution s;
    vector<int> pt, qt, t, et;
    TreeNode *root, *p, *q, *r, *e;

    {
        t = {6, 2, 8, 10, 4, 7, 9, null, null, 3, 5};
        pt = {2};
        qt = {8};
        et = {6};
        root = createTree(t);
        p = createTree(pt);
        q = createTree(qt);
        e = createTree(et);
        r = s.lowestCommonAncestor(root, p, q);
        assert((r->val == e->val));
    }

    cout << "PASS!" << endl;
}