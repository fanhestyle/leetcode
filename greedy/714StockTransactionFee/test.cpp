#include "s1.hpp"

//    int maxProfit(vector<int>& prices, int fee) {}

int main()
{
    Solution solution;
    vector<int> prices;
    int fee;
    int r, e;
    {
        prices = {1, 3, 2, 8, 4, 9};
        fee = 2;
        e = 8;
        r = solution.maxProfit(prices, fee);

        assert(r == e);
    }

    {
        prices = {1, 3, 7, 5, 10, 3};
        fee = 3;
        e = 6;
        r = solution.maxProfit(prices, fee);

        assert(r == e);
    }

    cout << "PASS!" << endl;
}