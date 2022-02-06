#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            if (a != b)
                pq.push(a - b);
        }

        if (pq.empty())
            return 0;
        else
            return pq.top();
    }
};