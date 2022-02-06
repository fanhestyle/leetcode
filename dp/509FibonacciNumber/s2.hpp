#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;

        int a = 1;
        int b = 0;
        int c;

        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            b = a;
            a = c;
        }

        return c;
    }
};