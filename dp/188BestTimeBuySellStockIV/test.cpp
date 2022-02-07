#include "s1.hpp"

// int maxProfit(int k, vector<int>& prices) {

int main()
{
    Solution solution;
    int k;
    vector<int> prices;
    int r, e;

    {
        k = 2;
        prices = {2, 4, 1};
        e = 2;
        r = solution.maxProfit(k, prices);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        k = 2;
        prices = {3, 2, 6, 5, 0, 3};
        e = 7;
        r = solution.maxProfit(k, prices);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        k = 3;
        prices = {2, 6, 8, 7, 8, 7, 9, 4, 1, 2, 4, 5, 8};
        e = 15;
        r = solution.maxProfit(k, prices);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}