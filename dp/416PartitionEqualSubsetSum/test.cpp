//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"
// bool canPartition(vector<int>& nums) {

int main()
{
    Solution solution;
    vector<int> nums;
    bool r, e;

    {
        nums = {1, 5, 11, 5};
        e = true;
        r = solution.canPartition(nums);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }
    {
        nums = {1, 2, 3, 5};
        e = false;
        r = solution.canPartition(nums);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {1, 2, 5};
        e = false;
        r = solution.canPartition(nums);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}