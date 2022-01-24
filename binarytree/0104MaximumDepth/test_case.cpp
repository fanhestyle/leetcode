/*
int maxDepth(TreeNode* root)
*/


//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

#define null 0

int main()
{
    Solution s;
    TreeNode* root;
    int e, r;

    {
        vector<int> tree = {3, 9, 20, null, null, 15, 7};
        root = createTree(tree);
        e = 3;
        r = s.maxDepth(root);
        assert(e == r);
    }

    {
        // Input: root = [1,null,2]
        // Output: 2

        vector<int> tree = {1, null, 2};
        root = createTree(tree);
        e = 2;
        r = s.maxDepth(root);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}