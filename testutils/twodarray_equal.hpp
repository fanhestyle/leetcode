#pragma once

#include <bits/stdc++.h>
using namespace std;

template<typename T>
bool isArrayEqual(vector<T>& lhs, vector<T>& rhs)
{
    sort(lhs.begin(), lhs.end());
    sort(rhs.begin(), rhs.end());
    if (lhs.size() != rhs.size())
        return false;
    for (int i = 0; i < lhs.size(); i++)
        if (lhs.at(i) != rhs.at(i))
            return false;
    return true;
}

template<typename T>
bool contains(vector<vector<T>>& vec, vector<T>& item)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (isArrayEqual(vec.at(i), item))
            return true;
    }
    return false;
}

template<typename T>
bool isEqual(vector<vector<T>>& lhs, vector<vector<T>>& rhs)
{
    if (lhs.size() != rhs.size())
        return false;

    for (int j = 0; j < rhs.size(); j++)
    {
        if (!contains(lhs, rhs.at(j)))
            return false;
    }

    for (int i = 0; i < lhs.size(); i++)
    {
        if (!contains(rhs, lhs.at(i)))
            return false;
    }

    return true;
}
