//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

// bool isSymmetric(TreeNode* root)

int main()
{
    Solution s;
    TreeNode* root;
    bool r, e;

    // Input: root = [1,2,2,3,4,4,3]
    // Output: true

    {
        TreeNode* one = new TreeNode(1);
        TreeNode* two1 = new TreeNode(2);
        TreeNode* two2 = new TreeNode(2);
        TreeNode* three1 = new TreeNode(3);
        TreeNode* three2 = new TreeNode(3);

        one->left = two1;
        one->right = two2;
        two1->right = three1;
        two2->right = three2;

        root = one;

        e = false;
        r = s.isSymmetric(root);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}