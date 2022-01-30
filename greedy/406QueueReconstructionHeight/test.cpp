#include "../../testutils/debug.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

// vector<vector<int>> reconstructQueue(vector<vector<int>>& people)

int main()
{
    Solution s;
    vector<vector<int>> people, r, e;

    {
        people = {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
        e = {{5, 0}, {7, 0}, {5, 2}, {6, 1}, {4, 4}, {7, 1}};
        r = s.reconstructQueue(people);
        assert(isEqual<int>(r, e));
    }

    {
        people = {{6, 0}, {5, 0}, {4, 0}, {3, 2}, {2, 2}, {1, 4}};
        e = {{4, 0}, {5, 0}, {2, 2}, {3, 2}, {1, 4}, {6, 0}};
        r = s.reconstructQueue(people);
        assert(isEqual<int>(r, e));
    }

    cout << "PASS" << endl;
}