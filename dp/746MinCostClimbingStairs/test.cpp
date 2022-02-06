#include "s1.hpp"

// int minCostClimbingStairs(vector<int>& cost) {

int main()
{
    Solution solution;
    vector<int> cost;
    int r, e;

    {
        cost = {10, 15, 20};
        e = 15;
        r = solution.minCostClimbingStairs(cost);
        assert(r == e);
    }

    {
        cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
        e = 6;
        r = solution.minCostClimbingStairs(cost);
        assert(r == e);
    }

    {
        cost = {1, 2, 8, 1};
        e = 3;
        r = solution.minCostClimbingStairs(cost);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}