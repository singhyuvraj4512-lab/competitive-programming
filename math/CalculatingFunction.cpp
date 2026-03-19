// Problem: Calculating Function (Codeforces 486A)
// Topic: Math
// Difficulty: 800
// Idea: Use pattern: even → n/2, odd → -(n+1)/2.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}