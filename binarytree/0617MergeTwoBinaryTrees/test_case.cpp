//#include "s1.hpp"
#include "s2.hpp"

// TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)

#define null 0

int main()
{
    Solution s;
    TreeNode* root1;
    TreeNode* root2;
    TreeNode *r, *e;

    {
        vector<int> t1, t2, te;
        t1 = {1, 3, 2, 5};
        t2 = {2, 1, 3, null, 4, null, 7};
        te = {3, 4, 5, 5, 4, null, 7};

        root1 = createTree(t1);
        root2 = createTree(t2);
        e = createTree(te);

        r = s.mergeTrees(root1, root2);
        assert(isTreeEqual(r, e));
    }

    {
        vector<int> t1, t2, te;
        t1 = {1};
        t2 = {1, 2};
        te = {2, 2};

        root1 = createTree(t1);
        root2 = createTree(t2);
        e = createTree(te);

        r = s.mergeTrees(root1, root2);
        assert(isTreeEqual(r, e));
    }

    //[1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,2]
    //  [1,null,1,null,1,null,1,null,1,null,1,2]
    // [2,null,2,null,2,null,2,null,2,null,2,2,1,null,null,null,1,null,1,null,1,null,1,2]

    {
        vector<int> t1, t2, te;
        t1 = {1,    null, 1,    null, 1,    null, 1,    null, 1,    null, 1,
              null, 1,    null, 1,    null, 1,    null, 1,    null, 1,    2};
        t2 = {1, null, 1, null, 1, null, 1, null, 1, null, 1, 2};
        te = {2, null, 2,    null, 2, null, 2, null, 2, null, 2, 2,
              1, null, null, null, 1, null, 1, null, 1, null, 1, 2};

        root1 = createTree(t1);
        root2 = createTree(t2);
        e = createTree(te);

        r = s.mergeTrees(root1, root2);
        assert(isTreeEqual(r, e));
    }

    cout << "PASS!" << endl;
}