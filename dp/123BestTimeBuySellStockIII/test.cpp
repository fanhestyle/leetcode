//#include "s1.hpp"
#include "s2.hpp"
// int maxProfit(vector<int>& prices) {}

int main()
{
    Solution solution;
    vector<int> prices;
    int r, e;

    {
        prices = {3, 3, 5, 0, 0, 3, 1, 4};
        e = 6;
        r = solution.maxProfit(prices);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        prices = {1, 2, 3, 4, 5};
        e = 4;
        r = solution.maxProfit(prices);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        prices = {7, 6, 4, 3, 1};
        e = 0;
        r = solution.maxProfit(prices);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        prices = {1, 2, 4, 2, 5, 7, 2, 4, 9, 0};
        e = 13;
        r = solution.maxProfit(prices);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}