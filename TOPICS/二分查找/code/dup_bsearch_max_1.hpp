#pragma once

#include <bits/stdc++.h>

/*
二分法的修改版本：
1. 采用左闭右闭区间
2. 区间采用非降序序列（存在多个目标值）
3. 如果存在多个target值，那么返回最后的那个target
*/

template<typename T>
int binarySearch_impl(const std::vector<int>& array, int left, int right,
                      T target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (array.at(mid) < target) // target在mid右侧
        {
            left = mid + 1;
        }
        else if (target < array.at(mid)) // target在mid左侧
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (right < 0 || array.at(right) != target)
        return -1;

    return right;
}

int binarySearch_max(const std::vector<int>& array, int target)
{
    return binarySearch_impl(array, 0, array.size() - 1, target);
}
