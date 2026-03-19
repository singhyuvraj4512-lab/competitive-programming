// Problem: Free Ice Cream (Codeforces 686A)
// Topic: Simulation
// Difficulty: 800
// Idea: Maintain available ice cream and count failed operations.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    long long ice_cream = x;
    int count = 0;

    while (n--)
    {

        char c;
        cin >> c;

        int d;
        cin >> d;

        if (c == '+')
        {
            ice_cream += d;
        }

        else
        {
            if (ice_cream < d)
            {
                count++;
            }
            else
            {
                ice_cream -= d;
            }
        }
    }

    cout << ice_cream << " " << count << endl;

    return 0;
}