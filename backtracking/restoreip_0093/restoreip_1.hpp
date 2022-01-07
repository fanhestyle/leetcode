#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> track;
        vector<string> result;
        int index;
        dfs(result, s, track, 0);

        return result;
    }

    int sizeOfIP(const vector<string>& ip)
    {
        int sz = 0;
        for (int i = 0; i < ip.size(); i++)
        {
            sz += (ip.at(i).size());
        }
        return sz;
    }

    string formIP(const vector<string>& ip)
    {
        string ipstring = "";
        int i = 0;
        for (; i < ip.size() - 1; i++)
        {
            ipstring = ipstring + ip.at(i) + ".";
        }
        ipstring += ip.at(i);
        return ipstring;
    }

    bool isValidIpPart(const std::string& str)
    {
        if ((str.size() <= 0) || (str.size() > 3))
            return false;

        if (str.size() >= 2 && str.at(0) == '0')
            return false;

        if (str.size() == 3)
        {
            if (stoi(str) > 255)
                return false;
        }
        return true;
    }

    void dfs(vector<string>& result, string s, vector<string>& track, int index)
    {
        if (track.size() > 4)
        {
            return;
        }
        else if (track.size() == 4)
        {
            if (sizeOfIP(track) == s.size())
            {
                result.push_back(formIP(track));
                return;
            }
            return;
        }
        else
        {
            if (sizeof(track) == s.size())
                return;
        }

        for (int i = 1; i <= 3; i++)
        {
            string str = s.substr(index, i);
            if (index + i > s.size())
                continue;

            if (isValidIpPart(str))
            {
                track.push_back(str);
                dfs(result, s, track, index + i);
                track.pop_back();
            }
        }
    }
};