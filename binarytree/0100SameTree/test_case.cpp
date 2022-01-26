#include "s1.hpp"

// bool isSameTree(TreeNode* p, TreeNode* q)
#define null 0

int main()
{
    Solution s;
    TreeNode *p, *q;
    bool r, e;

    {
        vector<int> pt, qt;
        pt = {1, 2, 3};
        qt = {1, 2, 3};
        p = createTree(pt);
        q = createTree(qt);
        r = s.isSameTree(p, q);
        e = true;
        assert(r == e);
    }

    {
        vector<int> pt, qt;
        pt = {1, 2};
        qt = {1, null, 2};
        p = createTree(pt);
        q = createTree(qt);
        r = s.isSameTree(p, q);
        e = false;
        assert(r == e);
    }

    {
        vector<int> pt, qt;
        pt = {1, 1, 2};
        qt = {1, 2, 1};
        p = createTree(pt);
        q = createTree(qt);
        r = s.isSameTree(p, q);
        e = false;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}