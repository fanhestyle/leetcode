//#include "s1.hpp"
#include "s2.hpp"
// int candy(vector<int>& ratings)

int main()
{
    Solution s;
    vector<int> ratings;
    int r, e;

    {
        ratings = {1, 0, 2};
        e = 5;
        r = s.candy(ratings);
        assert(r == e);
    }
    {
        ratings = {1, 2, 2};
        e = 4;
        r = s.candy(ratings);
        assert(r == e);
    }

    {
        ratings = {1, 3, 2, 2, 1};
        e = 7;
        r = s.candy(ratings);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}