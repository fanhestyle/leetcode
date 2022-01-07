#include <bits/stdc++.h>
using namespace std;

// brutal force
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

        int tlen = t.length();
        int minWindowCnt = s.length() + 1;
        string minString;

        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i + tlen-1; j < s.length(); j++)
            {
                int letterHash[123] = {0};
                int diffCharCnt = 0;
                for (int i = 0; i < t.length(); i++)
                {
                    if (letterHash[t[i]] == 0)
                        diffCharCnt++;
                    letterHash[t[i]]++;
                }

                for (int k = i; k <= j; k++)
                {
                    if (letterHash[s[k]] == 0)
                        continue;

                    if (letterHash[s[k]] == 1)
                    {
                        diffCharCnt--;
                    }
                    letterHash[s[k]]--;

                    if (diffCharCnt == 0)
                    {
                        int c = k - i + 1;
                        if (c < minWindowCnt)
                        {
                            minWindowCnt = c;
                            minString = s.substr(i, c);
                        }
                    }
                }
            }
        }

        return minString;
    }
};