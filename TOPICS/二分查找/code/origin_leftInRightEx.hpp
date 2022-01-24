#pragma once

#include <bits/stdc++.h>

/*
二分法的最原始版本：
1. 采用左闭右开区间
2. 区间元素严格升序排列(没有相等的元素)
*/

template<typename T>
int binarySearch_impl(const std::vector<int>& array, int left, int right,
                      T target)
{
    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] < target)
        {
            left = mid + 1;
        }
        else if (target < array[mid])
        {
            right = mid;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int binarySearch(const std::vector<int>& array, int target)
{
    return binarySearch_impl(array, 0, array.size(), target);
}