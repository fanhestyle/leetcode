//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"

#define null 0
// bool hasPathSum(TreeNode* root, int targetSum)

int main()
{
    Solution s;
    TreeNode* root;
    int targetSum;
    bool r, e;

    {
        vector<int> t = {1, 2, 4, 3, 5};
        root = createTree(t);
        targetSum = 8;
        e = true;
        r = s.hasPathSum(root, targetSum);
        assert(r == e);
    }

    {
        vector<int> t = {5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1};
        root = createTree(t);
        targetSum = 22;
        e = true;
        r = s.hasPathSum(root, targetSum);
        assert(r == e);
    }

    {
        vector<int> t = {1, 2, 3};
        root = createTree(t);
        targetSum = 5;
        e = false;
        r = s.hasPathSum(root, targetSum);
        assert(r == e);
    }

    {
        vector<int> t = {};
        root = createTree(t);
        targetSum = 0;
        e = false;
        r = s.hasPathSum(root, targetSum);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}