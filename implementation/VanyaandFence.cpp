// Problem: Vanya and Fence (Codeforces 677A)
// Topic: Implementation
// Difficulty: 800
// Idea: Add width based on whether height exceeds fence limit.
#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int width = 0;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if (a <= h)
        {
            width = width + 1;
        }
        else
        {
            width = width + 2;
        }
    }

    cout << width << endl;
    return 0;
}