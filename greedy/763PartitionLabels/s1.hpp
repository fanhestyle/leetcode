#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> result;

        char chArray[26] = {0};
        char bArray[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            chArray[s[i] - 'a']++;
            bArray[s[i] - 'a'] = 1;
        }

        int require = 0;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if (bArray[s[i] - 'a'])
            {
                require++;
                bArray[s[i] - 'a'] = 0;
            }

            chArray[ch - 'a']--;
            if (chArray[ch - 'a'] == 0)
                require--;

            if (require == 0)
            {
                if (result.empty())
                    result.push_back(i+1);
                else
                    result.push_back(i+1 - accumulate(result.begin(),result.end(),0));
            }
        }

        return result;
    }
};