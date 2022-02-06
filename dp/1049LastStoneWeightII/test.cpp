#include "s1.hpp"
//#include "s2.hpp"

// int lastStoneWeightII(vector<int>& stones) {

int main()
{
    Solution solution;
    vector<int> stones;
    int r, e;

    {
        stones = {2,7,4,1,8,1};
        e = 1;
        r = solution.lastStoneWeightII(stones);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        stones = {31,26,33,21,40};
        e = 5;
        r = solution.lastStoneWeightII(stones);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}