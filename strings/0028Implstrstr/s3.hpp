#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
kmp algorithm

*/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
            return 0;

        if (haystack.empty())
            return -1;

        int lenText = haystack.length();
        int lenPattern = needle.length();

        vector<int> nextArray = getNextArray(needle);

        int i = 0;
        int j = 0;
        while (i < lenText && j < lenPattern)
        {
            while (j > 0 && haystack[i] != needle[j])
            {
                j = nextArray[j - 1];
            }

            if (haystack[i] == needle[j])
            {
                j++;
            }
            i++;
        }

        if (j == lenPattern)
            return i - j;

        return -1;
    }

    vector<int> getNextArray(const string& patternString)
    {
        int len = patternString.length();
        vector<int> nextArray(len);

        nextArray[0] = 0;
        int j = 0;
        int i = 1;

        while (i < len)
        {
            while (j > 0 && patternString[i] != patternString[j])
            {
                j = nextArray[j - 1];
            }

            if (patternString[i] == patternString[j])
                ++j;

            if (patternString[i] != patternString[j-1])
                nextArray[i] = j;
            else
                nextArray[i] = nextArray[j-1];

            ++i;
        }

        return nextArray;
    }
};