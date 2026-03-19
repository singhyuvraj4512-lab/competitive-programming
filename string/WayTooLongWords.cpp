// Problem: Way Too Long Words (Codeforces 71A)
// Topic: Strings
// Difficulty: 800
// Idea: Replace long words with first letter + count + last letter.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i].length() > 10)
        {
            cout << a[i][0] << a[i].length() - 2 << a[i][a[i].length() - 1] << endl;
        }
        else
        {
            cout << a[i] << endl;
        }
    }

    return 0;
}