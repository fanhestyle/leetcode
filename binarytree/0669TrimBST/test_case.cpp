//#include "s1.hpp"
#include "s2.hpp"

// root = [1,0,2], low = 1, high = 2
// TreeNode* trimBST(TreeNode* root, int low, int high)

#define null 0

int main()
{
    Solution s;
    int low = 2;
    int high = 4;
    vector<int> t = {1,null,2};
    TreeNode* root = createTree(t);
    TreeNode* r = s.trimBST(root, low, high);
    vector<int> te = {2};
    TreeNode* e = createTree(te);

    assert(isTreeEqual(r, e));

    cout << "PASS!" << endl;
}