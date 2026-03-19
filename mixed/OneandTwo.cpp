// Problem: One and Two (Codeforces 1788A)
// Topic: Arrays
// Difficulty: 800
// Idea: Count occurrences of 2 and split array equally.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        int no_of_twos = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                no_of_twos++;
            }
        }

        if (no_of_twos % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int target = no_of_twos / 2;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                target--;
            }

            if (target == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}