#include <bits/stdc++.h>
using namespace std;

/*
vector<string> findItinerary(vector<vector<string>>& tickets)

*/

#include "recon_it_1.hpp"

int main()
{
    Solution solution;
    vector<vector<string>> tickets;
    vector<string> result, expected;

    {
        tickets = {{}};
        expected = {};

        result = solution.findItinerary(tickets);
        assert();
    }
    
    {
        tickets = {{}};
        expected = {};

        result = solution.findItinerary(tickets);
        assert();
    }

    cout << "PASS!" << endl;
}