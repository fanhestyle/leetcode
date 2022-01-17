#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution s;
    TreeNode* root;
    vector<vector<int>> r, e;

    /*
    Input: root = [3,9,20,null,null,15,7]
    Output: [[3],[9,20],[15,7]]
    */
    {
        TreeNode* three = new TreeNode(3);
        TreeNode* nine = new TreeNode(9);
        TreeNode* twenty = new TreeNode(20);
        TreeNode* fifteen = new TreeNode(15);
        TreeNode* seven = new TreeNode(7);

        twenty->left = fifteen;
        twenty->right = seven;
        three->left = nine;
        three->right = twenty;
        root = three;

        r = s.levelOrderBottom(root);
        e = {{15, 7}, {9, 20}, {3}};
        assert(isEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}