#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
#include "s2.hpp"

#define null 0

// vector<vector<int>> pathSum(TreeNode* root, int targetSum)

int main()
{
    Solution s;
    vector<int> t;
    TreeNode* root;
    int targetSum;
    vector<vector<int>> r, e;

    {
        t = {5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1};
        root = createTree(t);
        targetSum = 22;
        r = s.pathSum(root, targetSum);
        e = {{5, 4, 11, 2}, {5, 8, 4, 5}};
        assert(isEqual<int>(r, e));
    }

    {
        t = {1,2,3};
        root = createTree(t);
        targetSum = 5;
        r = s.pathSum(root, targetSum);
        e = {};
        assert(isEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}