#include "s1.hpp"

// bool isSubtree(TreeNode* root, TreeNode* subRoot)

#define null 0

int main()
{
    Solution s;
    vector<int> rtree, subtree;
    TreeNode *root, *subRoot;
    bool r, e;

    {
        rtree = {3, 4, 5, 1, 2};
        subtree = {4, 1, 2};
        root = createTree(rtree);
        subRoot = createTree(subtree);
        r = s.isSubtree(root, subRoot);
        e = true;
        assert(r == e);
    }

    {
        rtree = {3, 4, 5, 1, 2, null, null, null, null, 0};
        subtree = {4, 1, 2};
        root = createTree(rtree);
        subRoot = createTree(subtree);
        r = s.isSubtree(root, subRoot);
        e = false;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}
