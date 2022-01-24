#include "s1.hpp"
//#include "s2.hpp"

// int sumOfLeftLeaves(TreeNode* root)
#define null 0

int main()
{
    Solution s;
    TreeNode* root;
    int r, e;

    //  3,9,20,null,null,15,7
    {
        vector<int> tree = {3, 9, 20, null, null, 15, 7};
        root = createTree(tree);
        r = s.sumOfLeftLeaves(root);
        e = 24;
        assert(r == e);
    }

    {
        vector<int> tree = {1};
        root = createTree(tree);
        r = s.sumOfLeftLeaves(root);
        e = 0;
        assert(r == e);
    }

    {
        vector<int> tree = {1,2,3,4,5};
        root = createTree(tree);
        r = s.sumOfLeftLeaves(root);
        e = 4;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}