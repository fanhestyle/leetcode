//#include "s1.hpp"
#include "s2.hpp"


// int maxProfit(vector<int>& prices)
// 1 <= prices.length <= 3 * 104
// 0 <= prices[i] <= 104

int main()
{
    Solution solution;
    vector<int> prices;
    int r, e;

    {
        prices = {7, 1, 5, 3, 6, 4};
        e = 7;
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

    cout << "PASS!" << endl;
}