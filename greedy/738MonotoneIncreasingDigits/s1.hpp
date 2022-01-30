#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int monotoneIncreasingDigits(int n)
    {
        if (n < 10)
            return n;

        string str = to_string(n);

        int pos = str.size();

        for (int i = str.size() - 1; i > 0; i--)
        {
            if (str[i - 1] > str[i])
            {
                str[i - 1] -= 1;
                pos = i;
            }
        }

        for (int i = pos; i < str.size(); i++)
        {
            str[i] = '9';
        }

        return stoi(str);
    }
};