#include "s1.hpp"

#define null 0

// int rob(TreeNode* root) {

    
int main()
{
    Solution solution;
    TreeNode* root;
    int r, e;

    {
        vector<int> t = {3, 2, 3, null, 3, null, 1};
        root = createTree(t);
        e = 7;
        r = solution.rob(root);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        vector<int> t = {3, 4, 5, 1, 3, null, 1};
        root = createTree(t);
        e = 9;
        r = solution.rob(root);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}