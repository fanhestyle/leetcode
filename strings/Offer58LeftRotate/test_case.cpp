/*

string reverseLeftWords(string s, int n)
*/

//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    string s, r, e;
    int n;

    {
        s = "abcdefg";
        n = 2;
        e = "cdefgab";
        r = solution.reverseLeftWords(s, n);
        assert(r == e);
    }

    // {
    //     s = "lrloseumgh";
    //     n = 6;
    //     e = "umghlrlose";
    //     r = solution.reverseLeftWords(s, n);
    //     assert(r == e);
    // }

    {
        s = "abcdefghij";
        n = 6;
        e = "ghijabcdef";
        r = solution.reverseLeftWords(s, n);
        assert(r == e);
    }

    {
        s = "wusrvaiwcuqzdxxtemgangtpahidjsxokiumpsayxctraifbwgjjtxutlpgmdjqgjyzkzxishmyuxsuldqkosbgeafpnlzzjxtio";
        n = 56;
//r = "lpgmdjqgjyzkzxishmyuxsuldqkosbgeafpnlzzjxtiowusrvaiwcuqzdxxtemgangtpahidjsxokiumpsayxctrtxutaifbwgjj"
        e = "lpgmdjqgjyzkzxishmyuxsuldqkosbgeafpnlzzjxtiowusrvaiwcuqzdxxtemgangtpahidjsxokiumpsayxctraifbwgjjtxut";
        r = solution.reverseLeftWords(s,n);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}