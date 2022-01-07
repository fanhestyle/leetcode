/*
vector<vector<int>> generateMatrix(int n)

Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

Input: n = 1
Output: [[1]]
*/
//#include "s1.hpp"
#include "s2.hpp"

#include "../../testutils/twodarray_equal.hpp"

int main()
{
    Solution solution;
    vector<vector<int>> result;
    vector<vector<int>> expected;
    int n;

    {
        n = 3;
        expected = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
        result = solution.generateMatrix(n);
        assert(isEqual<int>(result, expected));
    }

    {
        n = 1;
        expected = {{1}};
        result = solution.generateMatrix(n);
        assert(isEqual<int>(result, expected));
    }

    {
        n = 4;
        expected = {
            {1, 2, 3, 4}, {12, 13, 14, 5}, {11, 16, 15, 6}, {10, 9, 8, 7}};
        result = solution.generateMatrix(n);
        assert(isEqual<int>(result, expected));
    }

    cout << "PASS!" << endl;
}
