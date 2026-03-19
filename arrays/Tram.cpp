// Problem: Tram (Codeforces 116A)
// Topic: Arrays / Simulation
// Difficulty: 800
// Idea: Track current passengers and find maximum capacity needed.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 2];
    int b[n + 2];
    int c[n + 2];

    a[0] = b[0] = c[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 1; i <= n; i++)
    {
        c[i] = c[i - 1] - a[i] + b[i];
    }

    cout << *max_element(c, c + n + 1) << endl;

    return 0;
}