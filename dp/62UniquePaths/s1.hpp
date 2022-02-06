#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//递归解法

class Solution
{
public:
    int uniquePaths(int m, int n) { return val(m - 1, n - 1); }

    int val(int m, int n)
    {
        if (m == 0 && n == 0)
            return 1;
        if (m == 0 || n == 0)
            return 1;

        return val(m - 1, n) + val(m, n - 1);
    }
};