//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"


// TreeNode* invertTree(TreeNode* root)

// Input: root = [2,1,3]
// Output: [2,3,1]

int main()
{
    Solution s;
    TreeNode *r, e;
    TreeNode* root;

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

        r = s.invertTree(root);

        assert(r->left = three);
        assert(r->right = two);
        assert(three->left = seven);
        assert(three->right = six);
        assert(two->left = five);
        assert(two->right = four);

    }

    cout << "PASS!" << endl;
}