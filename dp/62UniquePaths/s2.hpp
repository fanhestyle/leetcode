#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//深度优先搜索解法（转换成二叉树）

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int mcnt = m - 1;
        int ncnt = n - 1;
        int result = 0;
        dfs(mcnt, ncnt, result);
        return result;
    }

    void dfs(int& m, int& n, int& result)
    {
        if (m < 0 || n < 0)
            return;
        if (m == 0 && n == 0)
            result += 1;

        m--;
        dfs(m, n, result);
        m++;

        n--;
        dfs(m, n, result);
        n++;
    }
};