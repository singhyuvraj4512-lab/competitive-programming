// Problem: Anton and Danik (Codeforces 734A)
// Topic: Implementation
// Difficulty: 800
// Idea: Count occurrences of 'A' and 'D' to determine winner.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int anton = 0;
    int danik = 0;

    for (int i = 0; i < n; i++)
    {
        char result;
        cin >> result;

        if (result == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (danik > anton)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}