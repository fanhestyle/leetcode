#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int>& height)
    {
        int heightSize = height.size();

        int ans = 0;
        int left = 0, right = heightSize - 1;
        int leftMax = 0, rightMax = 0; //这两个值用来记录左右的“壁”的最高值

        while (left < right)
        { 
            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);
            if (leftMax < rightMax)
            {
                ans += leftMax -
                       height[left]; //这里考虑的是下标为left的“底”能装多少水
                ++left; //指针的移动次序是这个方法的关键
                //这里左指针右移是因为左“墙”较矮，左边这一片实际情况下的盛水量是受制于这个矮的左“墙”的
                //而较高的右边在实际情况下的限制条件可能不是当前的左“墙”，比如限制条件可能是右“墙”，就能装更高的水，
            }
            else
            {
                ans += rightMax - height[right]; //同理，考虑下标为right的元素
                --right;
            }
        }
        return ans;
    }
};