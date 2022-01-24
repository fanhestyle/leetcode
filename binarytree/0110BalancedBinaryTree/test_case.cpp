//#include "s1.hpp"
#include "s2.hpp"

// bool isBalanced(TreeNode* root)

#define null 0

int main()
{
    Solution s;
    TreeNode* root;
    bool r, e;

    {
        vector<int> tree = {3, 9, 20, null, null, 15, 7};
        root = createTree(tree);
        e = true;
        r = s.isBalanced(root);
        assert(r == e);
    }

    {
        // Input: root = [1,2,2,3,3,null,null,4,4]
        // Output: false
        vector<int> tree = {1, 2, 2, 3, 3, null, null, 4, 4};
        root = createTree(tree);
        e = false;
        r = s.isBalanced(root);
        assert(r == e);
    }

    {
        root = nullptr;
        e = true;
        r = s.isBalanced(root);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}