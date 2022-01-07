#include <bits/stdc++.h>

//#include "gen_parenthese_bforce.hpp"
//#include "gen_parenthese_bforce_2.hpp"
//#include "gen_parenthese_bforce_3.hpp"
//#include "gen_parenthese_bforce_4.hpp"
//#include "gen_parenthese_bfs.hpp"
//#include "gen_parenthese_nonrecursive.hpp"
#include "gen_parenthese_dfs_web.hpp"

/* test case
Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]

1 <= n <= 8
*/

int main()
{
    int n;
    std::vector<std::string> result;

    {
        n = 3;
        result = Solution::generateParenthesis(n);
        std::vector<std::string> expected = {"((()))","(()())","(())()","()(())","()()()"};
        assert(result == expected);
    }

    {
        n = 1;
        result = Solution::generateParenthesis(n);
        std::vector<std::string> expected = {"()"};
        assert(result == expected);
    }

    cout << "PASS!" << endl;
}
