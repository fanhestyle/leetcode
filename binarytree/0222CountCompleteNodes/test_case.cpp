//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"

// int countNodes(TreeNode* root)

int main()
{
    Solution s;
    TreeNode* root;
    int r, e;

    {
        vector<int> a = {1, 2, 3, 4, 5, 6};
        root = createTree(a);
        e = 6;
        r = s.countNodes(root);
        assert(r == e);
    }

    {
        vector<int> a = {};
        root = createTree(a);
        e = 0;
        r = s.countNodes(root);
        assert(r == e);
    }

    {
        vector<int> a = {1};
        root = createTree(a);
        e = 1;
        r = s.countNodes(root);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}
