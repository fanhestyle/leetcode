#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//排列组合的知识 (m+n-2,m-1)

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        long long res = 1;
        for (int i = 1, j = n; i < m; i++, j++)
        {
            res = (res * j / i);
        }

        return res;
    }
};