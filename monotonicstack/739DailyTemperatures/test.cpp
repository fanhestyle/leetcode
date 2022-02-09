//#include "s1.hpp"
#include "s2.hpp"
// vector<int> dailyTemperatures(vector<int>& temperatures) {

int main()
{
    Solution solution;

    vector<int> temperatures, r, e;

    {
        temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
        e = {1, 1, 4, 2, 1, 1, 0, 0};
        r = solution.dailyTemperatures(temperatures);
        // ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
        assert(isArrayEqual(e, r));
    }

    {
        temperatures = {30, 40, 50, 60};
        e = {1, 1, 1, 0};
        r = solution.dailyTemperatures(temperatures);
        // ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
        assert(isArrayEqual(e, r));
    }

    {
        temperatures = {30, 60, 90};
        e = {1, 1, 0};
        r = solution.dailyTemperatures(temperatures);
        // ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);

        assert(isArrayEqual(e, r));
    }

    cout << "PASS!" << endl;
}