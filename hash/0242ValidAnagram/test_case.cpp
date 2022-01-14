/*
bool isAnagram(string s, string t)

Input: s = "anagram", t = "nagaram"
Output: true

Input: s = "rat", t = "car"
Output: false
*/

#include "s1.hpp"

int main()
{
    Solution solution;
    string s, t;
    bool r, e;

    {
        s = "anagram";
        t = "nagaram";
        r = solution.isAnagram(s, t);
        e = true;
        assert(r == e);
    }

    {
        s = "rat";
        t = "car";
        r = solution.isAnagram(s, t);
        e = false;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}