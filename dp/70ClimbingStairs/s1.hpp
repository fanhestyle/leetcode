#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//回溯算法

class Solution
{
private:
    int cnt;

public:
    int climbStairs(int n)
    {
        cnt = 0;
        dfs(n);
        return cnt;
    }

    void dfs(int n)
    {
        if (n < 0)
            return;

        if (n == 0)
        {
            cnt++;
            return;
        }

        dfs(n - 1);
        dfs(n - 2);
    }
};