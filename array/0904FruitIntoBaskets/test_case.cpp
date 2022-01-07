/*

Input: fruits = [1,2,1]
Output: 3

Input: fruits = [0,1,2,2]
Output: 3

Input: fruits = [1,2,3,2,2]
Output: 4

int totalFruit(vector<int>& fruits)
*/

//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

int main()
{
    Solution solution;
    int result, expected;
    vector<int> fruits;

    {
        fruits = {1, 2, 1};
        expected = 3;
        result = solution.totalFruit(fruits);
        assert(expected == result);
    }

    {
        fruits = {0, 1, 2, 2};
        expected = 3;
        result = solution.totalFruit(fruits);
        assert(expected == result);
    }

    {
        fruits = {1, 2, 3, 2, 2};
        expected = 4;
        result = solution.totalFruit(fruits);
        assert(expected == result);
    }

    {
        fruits = {0, 0, 1, 1};
        expected = 4;
        result = solution.totalFruit(fruits);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}