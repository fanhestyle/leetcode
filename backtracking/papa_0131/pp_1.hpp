#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> result;
        vector<string> track;
        dfs(result, s, track, 0);
        return result;
    }

    void dfs(vector<vector<string>>& result, string s, vector<string>& track,
             int index)
    {
        if (sizeSum(track) == s.length())
        {
            result.push_back(track);
            return;
        }

        for (int i = 1; i <= s.length(); i++) // choose i number
        {
            if (index + i > s.length())
                return;
            string chosenString = s.substr(index, i);
            if (ispp(chosenString))
            {
                track.push_back(chosenString);
                dfs(result, s, track, index + i);
                track.pop_back();
            }
        }
    }

    int sizeSum(const vector<string>& v)
    {
        int sum = 0;
        for (auto& it : v)
        {
            sum += it.length();
        }
        return sum;
    }

    bool ispp(const std::string& s)
    {
        if (s.empty())
            return false;

        int f = 0;
        int e = s.size() - 1;

        while (f <= e)
        {
            if (s[f++] != s[e--])
                return false;
        }

        return true;
    }
};