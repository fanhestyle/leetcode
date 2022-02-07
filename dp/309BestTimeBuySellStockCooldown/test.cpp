#include "s1.hpp"

// int maxProfit(vector<int>& prices) {

int main()
{
    Solution solution;
    vector<int> prices;
    int r, e;

    // {
    //     prices = {1, 2, 3, 0, 2};
    //     e = 3;
    //     r = solution.maxProfit(prices);
    //     ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    // }

    {
        prices = {1,4,2};
        e = 3;
        r = solution.maxProfit(prices);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}