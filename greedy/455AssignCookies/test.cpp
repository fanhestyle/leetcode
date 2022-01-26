#include "s1.hpp"

// int findContentChildren(vector<int>& g, vector<int>& s)

int main()
{
    Solution sol;
    vector<int> g, s;
    int r, e;

    {
        g = {1, 2, 3};
        s = {1, 1};
        e = 1;
        r = sol.findContentChildren(g, s);
    }

    {
        g = {1, 2};
        s = {1, 2, 3};
        e = 2;
        r = sol.findContentChildren(g, s);
    }

    cout << "PASS!" << endl;
}