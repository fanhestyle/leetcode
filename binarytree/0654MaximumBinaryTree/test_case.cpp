#include "s1.hpp"

// TreeNode* constructMaximumBinaryTree(vector<int>& nums)

#define null 0

int main()
{
    Solution s;
    vector<int> nums;
    TreeNode *r, *e;

    {
        nums = {3, 2, 1};
        vector<int> t = {3, null, 2, null, 1};
        e = createTree(t);
        r = s.constructMaximumBinaryTree(nums);
        assert(isTreeEqual(r, e));
    }

    {
        nums = {4,3,2,7,1,6};
        vector<int> t = {7,4,6,null,3,1,null,null,2};
        e = createTree(t);
        r = s.constructMaximumBinaryTree(nums);
        assert(isTreeEqual(r, e));
    }

    cout << "PASS!" << endl;
}