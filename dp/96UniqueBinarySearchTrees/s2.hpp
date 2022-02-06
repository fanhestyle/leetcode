#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// the formula is Catalan Number

class Solution
{
public:
    int numTrees(int n)
    {
        long long result = 1;

        for (int i = 1, j = n + 1; i <= n; i++, j++)
        {
            result = (result * j) / i;
        }
        return result / (n + 1);
    }
};