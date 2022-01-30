#include "../../testutils/debug.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

// vector<int> partitionLabels(string s) {

int main()
{
    Solution solution;
    string s;
    vector<int> r, e;

    {
        s = "ababcbacadefegdehijhklij";
        e = {9,7,8};
        r = solution.partitionLabels(s);
        ASSERT_EX(isArrayEqual<int>(r, e),;);
    }
    {
        s = "eccbbbbdec";
        e = {10};
        r = solution.partitionLabels(s);
        assert(isArrayEqual<int>(r, e));
    }
    cout << "PASS!" << endl;
}