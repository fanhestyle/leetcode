/*
vector<int> spiralOrder(vector<vector<int>>& matrix)

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/

#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    vector<int> e, r;
    vector<vector<int>> matrix;

    {
        matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        r = solution.spiralOrder(matrix);
        e = {1, 2, 3, 6, 9, 8, 7, 4, 5};
        assert(isArrayEqual<int>(r, e));
    }

    {
        matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
        r = solution.spiralOrder(matrix);
        e = {1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};
        assert(isArrayEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}