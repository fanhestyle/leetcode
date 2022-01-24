#pragma once

#include <bits/stdc++.h>

/*
二分法多个相等target的版本：
1. 采用左闭右闭区间
2. 区间元素非降序排列(可能有多个target值)
3. 如果存在多个target，返回最左侧target的索引（最小的target索引）
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
            right = mid - 1;
        }
    }

    if (left >= array.size() || array.at(left) != target)
        return -1;
    return left;
}

int binarySearch_min(const std::vector<int>& array, int target)
{
    return binarySearch_impl(array, 0, array.size() - 1, target);
}
