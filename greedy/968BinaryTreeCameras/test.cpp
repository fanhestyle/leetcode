#include "s1.hpp"

//    int minCameraCover(TreeNode* root) {}

#define null -1

int main()
{
    Solution solution;
    vector<int> t;
    TreeNode* root;
    int r, e;

    {
        t = {0, 0, null, 0, 0};
        root = createTree(t, null);
        e = 1;
        r = solution.minCameraCover(root);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    {
        t = {0, 0, null, 0, null, 0, null, null, 0};
        root = createTree(t, null);
        e = 2;
        r = solution.minCameraCover(root);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    {
        t = {0, 0, 0, null, null, null, 0};
        root = createTree(t, null);
        e = 2;
        r = solution.minCameraCover(root);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    {
        t = {0, null, 0, 0, 0, null, null, null, 0};
        root = createTree(t, null);
        e = 2;
        r = solution.minCameraCover(root);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    {
        t = {0, 0, null, null, 0, 0, null, null, 0, 0};
        root = createTree(t, null);
        e = 2;
        r = solution.minCameraCover(root);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    cout << "PASS!" << endl;
}