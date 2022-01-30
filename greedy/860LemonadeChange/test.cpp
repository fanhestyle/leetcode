#include "../../testutils/debug.hpp"
#include "s1.hpp"
// bool lemonadeChange(vector<int>& bills)

int main()
{
    Solution s;
    vector<int> bills;
    bool r, e;

    {
        bills = {5, 5, 5, 10, 20};
        e = true;
        r = s.lemonadeChange(bills);
        ASSERT_EX(r == e,
                  cout << boolalpha << "expected: " << e << ", result:" << r << endl);
    }

    {
        bills = {5, 5, 10, 10, 20};
        e = false;
        r = s.lemonadeChange(bills);
        ASSERT_EX(r == e,
                  cout << boolalpha << "expected: " << e << ", result: " << r << endl);
    }

    cout << "PASS!" << endl;
}