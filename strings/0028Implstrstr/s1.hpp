#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
            return 0;

        if (haystack.empty())
            return -1;

        int m = needle.size();
        int n = haystack.size();

        for (int i = 0; i < n - m + 1; i++)
        {
            int k = i;
            int j = 0;
            while (j < needle.size())
            {
                if (haystack[k] != needle[j])
                    break;
                k++;
                j++;
            }
            if (k - i == needle.size())
            {
                return i;
            }
        }

        return -1;
    }
};