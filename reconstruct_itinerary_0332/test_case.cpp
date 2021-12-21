#include <bits/stdc++.h>
using namespace std;

/*
vector<string> findItinerary(vector<vector<string>>& tickets)

Input: tickets = [["MUC","LHR"],["JFK","MUC"],["SFO","SJC"],["LHR","SFO"]]
Output: ["JFK","MUC","LHR","SFO","SJC"]

*/

#include "../testutils/twodarray_equal.hpp"
#include "recon_it_1.hpp"

int main()
{
    Solution solution;
    vector<vector<string>> tickets;
    vector<string> result, expected;

    {
        tickets = {
            {"MUC", "LHR"}, {"JFK", "MUC"}, {"SFO", "SJC"}, {"LHR", "SFO"}};
        expected = {"JFK", "MUC", "LHR", "SFO", "SJC"};

        result = solution.findItinerary(tickets);
        assert(isArrayEqual<std::string>(expected, result));
    }

    {
        tickets = {{"JFK", "SFO"},
                   {"JFK", "ATL"},
                   {"SFO", "ATL"},
                   {"ATL", "JFK"},
                   {"ATL", "SFO"}};
        expected = {"JFK", "ATL", "JFK", "SFO", "ATL", "SFO"};

        result = solution.findItinerary(tickets);
        assert(isArrayEqual<std::string>(expected, result));
    }

    {
        tickets = {{"JFK", "SFO"},
                   {"JFK", "ATL"},
                   {"SFO", "ATL"},
                   {"ATL", "JFK"},
                   {"ATL", "SFO"}};

        expected = {"JFK", "ATL", "JFK", "SFO", "ATL", "SFO"};

        result = solution.findItinerary(tickets);
        assert(isArrayEqual<std::string>(expected, result));
    }

    cout << "PASS!" << endl;
}