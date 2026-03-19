// Problem: Arrival of the General (Codeforces 144A)
// Topic: Arrays
// Difficulty: 800
// Idea: Find positions of max and min and calculate required swaps.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int MaxInd = 0;
    int min = arr[0];
    int MinInd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            MaxInd = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            MinInd = i;
        }
    }

    int swap;

    if (MaxInd > MinInd)
    {
        swap = MaxInd + (n - 1 - MinInd) - 1;
    }
    else
    {
        swap = MaxInd + (n - 1 - MinInd);
    }

    cout << swap << endl;
    
    return 0;
}