// Problem: Bit++ (Codeforces 282A)
// Topic: Implementation
// Difficulty: 800
// Idea: Increment or decrement a variable based on string operations.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;

    while (n--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            x = x + 1;
        }
        else
        {
            x = x - 1;
        }
    }

    cout << x << endl;
    return 0;
}