// Problem: Ultra-Fast Mathematician (Codeforces 61A)
// Topic: Strings
// Difficulty: 800
// Idea: Perform XOR-like comparison between two binary strings.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    string c(a.length(), '0'); // create a string of same length as a and b filled with '0's

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            c[i] = '0';
        }
        else
        {
            c[i] = '1';
        }
    }

    cout << c << endl;

    return 0;
}