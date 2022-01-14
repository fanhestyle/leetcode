//#include "two_sum_bf.hpp"
//#include "two_sum_hash.hpp"
#include "two_sum_web_1.hpp"
//#include "two_sum_slide.hpp" //由于返回的是索引，因此不能排序去做，如果返回值是可以用快慢指针排序去解答的

int main(int argc, char **argv) {
  // test-case-1
  {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    assert((Solution::twoSum(nums, target) == vector<int>{0, 1}));
  }

  // test-case-2
  {
    vector<int> nums = {3, 2, 4};
    int target = 6;

    assert((Solution::twoSum(nums, target) == vector<int>{1, 2}));
  }

  // test-case-3
  {
    vector<int> nums = {3, 3};
    int target = 6;

    assert((Solution::twoSum(nums, target) == vector<int>{0, 1}));
  }

  cout << "PASS!" << endl;
}
