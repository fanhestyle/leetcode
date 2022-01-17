
/*
vector<int> preorderTraversal(TreeNode* root)

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right)
    {
    }
};
*/

#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
//#include "s2.hpp"
//#include "s2_space_optimized.hpp"
//#include "s3_recursive_logic.hpp"
//#include "s4.hpp"
#include "s5_morris.hpp"

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

    // {
    //     TreeNode* one = new TreeNode(1);
    //     TreeNode* two = new TreeNode(2);
    //     TreeNode* three = new TreeNode(3);
    //     TreeNode* four = new TreeNode(4);
    //     TreeNode* five = new TreeNode(5);
    //     TreeNode* six = new TreeNode(6);
    //     TreeNode* seven = new TreeNode(7);

    //     two->left = four;
    //     two->right = five;
    //     three->left = six;
    //     three->right = seven;
    //     one->left = two;
    //     one->right = three;
    //     root = one;

    //     r = sol.preorderTraversal(root);
    //     e = {1, 2, 4, 5, 3, 6, 7};
    //     assert(isArrayEqual<int>(r, e));
    // }

    {
        TreeNode* one = new TreeNode(1);
        TreeNode* two = new TreeNode(2);
        TreeNode* three = new TreeNode(3);

        one->left = two;
        one->right = three;
        root = one;

        r = sol.preorderTraversal(root);
        e = {1, 2, 3};
        assert(isArrayEqual<int>(r, e));
    }

    {
        root = nullptr;
        r = sol.preorderTraversal(root);
        e = {};
        assert(isArrayEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}