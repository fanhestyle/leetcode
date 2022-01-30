#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// 0:无覆盖(无摄像头)
// 1:有覆盖(无摄像头)
// 2:有摄像头

class Solution
{
private:
    int cnt;

public:
    int minCameraCover(TreeNode* root)
    {
        cnt = 0;
        int v = traverse(root);
        if (v == 0)
            cnt++;
        return cnt;
    }

    int traverse(TreeNode* root)
    {
        if (!root)
            return 1;

        int left = traverse(root->left);
        int right = traverse(root->right);

        if (left == 0 || right == 0)
        {
            cnt++;
            return 2;
        }

        if (left == 1 && right == 1)
            return 0;

        if (left == 2 || right == 2)
            return 1;

        return -1;
    }
};