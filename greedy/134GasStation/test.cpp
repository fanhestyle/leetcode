#include "s1.hpp"

//   int canCompleteCircuit(vector<int>& gas, vector<int>& cost)

int main()
{
    Solution s;
    vector<int> gas, cost;
    int r, e;

    {
        gas = {1, 2, 3, 4, 5};
        cost = {3, 4, 5, 1, 2};
        e = 3;
        r = s.canCompleteCircuit(gas, cost);
        assert(r == e);
    }

    {
        gas = {2, 3, 4};
        cost = {3, 4, 3};
        e = -1;
        r = s.canCompleteCircuit(gas, cost);
        assert(r == e);
    }

    //[5,1,2,3,4]
    //[4,4,1,5,1]
    {
        gas = {5, 1, 2, 3, 4};
        cost = {4, 4, 1, 5, 1};
        e = 4;
        r = s.canCompleteCircuit(gas, cost);
        assert(r == e);
    }

    {
        gas = {2};
        cost = {2};
        e = 0;
        r = s.canCompleteCircuit(gas, cost);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}