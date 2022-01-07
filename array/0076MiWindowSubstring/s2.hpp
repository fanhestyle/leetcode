#include <bits/stdc++.h>
using namespace std;

// slider window
// A ascii = 65
// Z ascii = 65+25 = 90
// a ascii = 97
// z ascii = 122

class Solution
{
public:
    string minWindow(string s, string t)
    {
        if (s.length() < t.length())
            return "";

        int minLen = s.length() + 1;
        string solutionString;

        int letterHash[123];
        for (int i = 0; i < 123; i++)
            letterHash[i] = 1000000;
        int diffCharCnt = 0;
        for (int i = 0; i < t.length(); i++)
        {
            if (letterHash[t[i]] == 1000000)
                letterHash[t[i]] = 0;

            if (letterHash[t[i]] == 0)
                diffCharCnt++;
            letterHash[t[i]]--;
        }

        int left = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (letterHash[s[i]] == 1000000)
                continue;

            letterHash[s[i]]++;
            if (letterHash[s[i]] == 0)
                diffCharCnt--;

            while (diffCharCnt == 0)
            {
                int foundLen = i - left + 1;
                if (foundLen < minLen)
                {
                    minLen = foundLen;
                    solutionString = s.substr(left, foundLen);
                }

                char curLeft = s[left];
                if (letterHash[curLeft] != 1000000)
                {
                    letterHash[curLeft]--;
                    if (letterHash[curLeft] < 0)
                    {
                        diffCharCnt++;
                    }
                }
                ++left;
            }
        }
        return solutionString;
    }
};