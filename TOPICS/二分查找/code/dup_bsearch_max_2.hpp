#pragma once

#include <bits/stdc++.h>

/*
二分法的修改版本：
1. 采用左闭右开区间
2. 区间采用非降序序列（存在多个目标值）
3. 如果存在多个target值，那么返回最后的那个target
*/

template<typename T>
int binarySearch_impl(const std::vector<int>& array, int left, int right,
                      T target)
{
    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (target < array.at(mid))
        {
            right = mid;
        }
        else if (array.at(mid) < target)
        {
            left = mid + 1;
        }
        else if (target == array.at(mid))
        {
            left = mid + 1;
        }
    }
    if (left == 0 || target != array.at(left - 1))
        return -1;
    return left - 1;
}

int binarySearch_max(const std::vector<int>& array, int target)
{
    return binarySearch_impl(array, 0, array.size(), target);
}
