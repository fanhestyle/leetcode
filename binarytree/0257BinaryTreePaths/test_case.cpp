#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
// vector<string> binaryTreePaths(TreeNode* root)
//#include "s2.hpp"
#include "s3.hpp"

#define null 0

int main()
{
    Solution s;
    TreeNode* root;
    vector<string> r, e;

    {
        vector<int> tree = {1, 2, 3, null, 5};
        root = createTree(tree);
        e = {"1->2->5", "1->3"};
        r = s.binaryTreePaths(root);
        assert(isArrayEqual<string>(r, e));
    }

    {
        vector<int> tree = {1};
        root = createTree(tree);
        e = {"1"};
        r = s.binaryTreePaths(root);
        assert(isArrayEqual<string>(r, e));
    }

    cout << "PASS!" << endl;
}