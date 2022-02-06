#include "s1.hpp"

// int coinChange(vector<int>& coins, int amount) {

int main()
{
    Solution solution;
    vector<int> coins;
    int amout, r, e;

    {
        coins = {1, 2, 5};
        amout = 11;
        e = 3;
        r = solution.coinChange(coins, amout);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        coins = {2};
        amout = 3;
        e = -1;
        r = solution.coinChange(coins, amout);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }
    {
        coins = {1};
        amout = 0;
        e = 0;
        r = solution.coinChange(coins, amout);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        coins = {186, 419, 83, 408};
        amout = 6249;
        e = 20;
        r = solution.coinChange(coins, amout);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}