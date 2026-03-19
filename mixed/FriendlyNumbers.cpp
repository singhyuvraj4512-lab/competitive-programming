// Problem: Friendly Numbers (Codeforces 2197A)
// Topic: Math / Brute Force
// Difficulty: 800
// Idea: Check numbers satisfying x = y - digit_sum(y) within range.
#include <bits/stdc++.h>
using namespace std;

int d(int y) // function to find sum of digits
{
    int ans = 0;
    while (y)
    {
        ans += y % 10;
        y /= 10;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int count = 0;

        for (int y = x; y < x + 100; y++)
        {
            if (y - d(y) == x)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}