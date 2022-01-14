#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        char charArray[26] = {0};

        for (char it : s)
        {
            charArray[it - 'a']++;
        }

        for (char it : t)
        {
            charArray[it - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (charArray[i] != 0)
                return false;
        }
        return true;
    }
};