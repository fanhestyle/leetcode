#include "s1.hpp"

// int maxProfit(vector<int>& prices)

int main()
{
    Solution s;
    vector<int> prices;
    int r, e;

    {
        prices = {7, 1, 5, 3, 6, 4};
        e = 7;
        r = s.maxProfit(prices);
        assert(r == e);
    }

    {
        prices = {1, 2, 3, 4, 5};
        e = 4;
        r = s.maxProfit(prices);
        assert(r == e);
    }

    {
        prices = {7,6,4,3,1};
        e = 0;
        r = s.maxProfit(prices);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}