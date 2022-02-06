#include "s1.hpp"

// int lastStoneWeight(vector<int>& stones) {

int main()
{
    Solution solution;
    vector<int> stones;
    int r, e;

    {
        stones = {2,7,4,1,8,1};
        e = 1;
        r = solution.lastStoneWeight(stones);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        stones = {1};
        e = 1;
        r = solution.lastStoneWeight(stones);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}