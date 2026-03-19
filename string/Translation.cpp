// Problem: Translation (Codeforces 41A)
// Topic: Strings
// Difficulty: 800
// Idea: Check if one string is the reverse of another.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if (s.length() != t.length())
    {
        cout << "NO" << endl;
    }
    else
    {

        bool flag = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[s.length() - 1 - i])
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}