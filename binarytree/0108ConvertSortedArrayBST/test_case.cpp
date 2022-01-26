#include "s1.hpp"

// TreeNode* sortedArrayToBST(vector<int>& nums)

#define null 0

int main()
{
    Solution s;
    vector<int> te,tes;
    TreeNode *r, *e, *es;
    vector<int> nums;

    {
        nums = {-10, -3, 1, 5, 9};
        te = {1, -3, 9, -10, null, 5};
        e = createTree(te);
        tes = {1,-10,5,null,-3,null,9};
        es = createTree(tes);
        r = s.sortedArrayToBST(nums);
        assert(isTreeEqual(r, e) || isTreeEqual(r,es));
    }

    cout << "PASS!" << endl;
}