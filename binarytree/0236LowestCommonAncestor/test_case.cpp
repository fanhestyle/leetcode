//#include "s1.hpp"
#include "s2.hpp"

// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)

#define null 0

int main()
{
    Solution s;
    vector<int> pt, qt, t, et;
    TreeNode *root, *p, *q, *r, *e;

    {
        t = {3,5,1,6,2,9,8,null,null,7,4};
        pt = {5};
        qt = {1};
        et = {3};
        root = createTree(t);
        p = createTree(pt);
        q = createTree(qt);
        r = s.lowestCommonAncestor(root,p,q);
        e = createTree(et);
        assert((r->val == e->val));
    }

    cout << "PASS!" << endl;
}