#include "s1.hpp"

// int change(int amount, vector<int>& coins) {

int main()
{
    Solution solution;
    vector<int> coins;
    int amount, r, e;

    {
        coins = {1,2,5};
        amount = 5;
        e = 4;
        r = solution.change(amount, coins);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        coins = {2};
        amount = 3;
        e = 0;
        r = solution.change(amount, coins);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        coins = {10};
        amount = 10;
        e = 1;
        r = solution.change(amount, coins);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}