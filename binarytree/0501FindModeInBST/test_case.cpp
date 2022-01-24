#include "s1.hpp"

// vector<int> findMode(TreeNode* root)
#define null 0

int main()
{
    Solution s;
    vector<int> r, e;
    vector<int> t;
    TreeNode* root;

    {
        t = {1, null, 2, 2};
        e = {2};
        root = createTree(t);
        r = s.findMode(root);
    }

    {
        t = {0};
        e = {0};
        root = createTree(t);
        r = s.findMode(root);
    }

    cout << "PASS!" << endl;
}
