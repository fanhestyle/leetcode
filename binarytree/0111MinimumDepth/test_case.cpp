//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

// Input: root = [3,9,20,null,null,15,7]
// Output: 2

// Input: root = [2,null,3,null,4,null,5,null,6]
// Output: 5

// int minDepth(TreeNode* root)
#define null 0

int main()
{
    Solution s;
    int r, e;
    TreeNode* root;

    {
        vector<int> tree = {3, 9, 20, null, null, 15, 7};
        root = createTree(tree);
        r = s.minDepth(root);
        e = 2;
        assert(r == e);
    }

    {
        vector<int> tree = {2, null, 3, null, 4, null, 5, null, 6};
        root = createTree(tree);
        r = s.minDepth(root);
        e = 5;
        assert(r == e);
    }

    {
        vector<int> tree = {1, 2, 3, 4, 5};
        root = createTree(tree);
        r = s.minDepth(root);
        e = 2;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}