#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
//#include "s4.hpp"
#include "s5.hpp"

int main()
{
    Solution sol;
    vector<int> r, e;
    TreeNode* root;

    // construct binary tree
    /*
                1
              /   \
            2      3
           / \    / \
          4  5   6  7
    */

    {
        TreeNode* one = new TreeNode(1);
        TreeNode* two = new TreeNode(2);
        TreeNode* three = new TreeNode(3);
        TreeNode* four = new TreeNode(4);
        TreeNode* five = new TreeNode(5);
        TreeNode* six = new TreeNode(6);
        TreeNode* seven = new TreeNode(7);

        two->left = four;
        two->right = five;
        three->left = six;
        three->right = seven;
        one->left = two;
        one->right = three;
        root = one;

        r = sol.postorderTraversal(root);
        e = {4,5,2,6,7,3,1};
        assert(isArrayEqual<int>(r, e));
    }

    {
        TreeNode* one = new TreeNode(1);
        TreeNode* two = new TreeNode(2);
        TreeNode* three = new TreeNode(3);

        one->left = two;
        one->right = three;
        root = one;

        r = sol.postorderTraversal(root);
        e = {2, 3, 1};
        assert(isArrayEqual<int>(r, e));
    }

    {
        root = nullptr;
        r = sol.postorderTraversal(root);
        e = {};
        assert(isArrayEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}