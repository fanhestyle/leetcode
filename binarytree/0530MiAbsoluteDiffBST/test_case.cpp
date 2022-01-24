#include "s1.hpp"

// int getMinimumDifference(TreeNode* root)

// Input: root = [4,2,6,1,3]
// Output: 1

int main()
{
    Solution s;
    vector<int> t;
    TreeNode* root;
    int r, e;

    {
        t = {4, 2, 6, 1, 3};
        root = createTree(t);
        r = s.getMinimumDifference(root);
        e = 1;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}