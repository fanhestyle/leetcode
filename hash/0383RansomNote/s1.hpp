#pragma once

/*

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int byteArray[26] = {0};

        for (char it : magazine)
        {
            byteArray[it - 'a']++;
        }

        for (char it : ransomNote)
        {
            byteArray[it - 'a']--;
            if (byteArray[it - 'a'] < 0)
            {
                return false;
            }
        }

        return true;
    }
};