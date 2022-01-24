//#include "s1.hpp"
#include "s2.hpp"

// bool isValidBST(TreeNode* root)

#define null 0

int main()
{
    Solution s;
    vector<int> t;
    TreeNode* root;
    bool r, e;

    {
        t = {2, 1, 3};
        root = createTree(t);
        e = true;
        r = s.isValidBST(root);
        assert(r == e);
    }

    // Input: root = [5,1,4,null,null,3,6]
    // Output: false

    {
        t = {5, 1, 4, null, null, 3, 6};

        root = createTree(t);
        e = false;
        r = s.isValidBST(root);
        assert(r == e);
    }

    {
        t = {5, 4, 6, null, null, 3, 7};

        root = createTree(t);
        e = false;
        r = s.isValidBST(root);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}