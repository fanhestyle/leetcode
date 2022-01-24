//#include "s1.hpp"
#include "s2.hpp"
//#include "s3.hpp"
// int findBottomLeftValue(TreeNode* root)

#define null 0

int main()
{
    Solution s;
    TreeNode* root;
    int r, e;

    {
        vector<int> tree = {2, 1, 3};
        root = createTree(tree);
        e = 1;
        r = s.findBottomLeftValue(root);
        assert(r == e);
    }

    {
        vector<int> tree = {1, 2, 3, 4, null, 5, 6, null, null, 7};
        root = createTree(tree);
        e = 7;
        r = s.findBottomLeftValue(root);
        assert(r == e);
    }

    {
        vector<int> tree = {0};
        root = createTree(tree);
        e = 0;
        r = s.findBottomLeftValue(root);
        assert(r == e);
    }

    {
        vector<int> tree = {1, null, 1};
        root = createTree(tree);
        e = 1;
        r = s.findBottomLeftValue(root);
        assert(r == e);
    }

    {
        vector<int> tree = {0, null, -1};
        root = createTree(tree);
        e = -1;
        r = s.findBottomLeftValue(root);
        assert(r == e);
    }

    {
        vector<int> tree = {3,1,5,10,2,4,6};
        root = createTree(tree);
        e = 10;
        r = s.findBottomLeftValue(root);
        assert(r==e);
    }

    cout << "PASS!" << endl;
}