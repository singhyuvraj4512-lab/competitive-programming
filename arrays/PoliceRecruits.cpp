// Problem: Police Recruits (Codeforces 427A)
// Topic: Simulation
// Difficulty: 800
// Idea: Track available officers and count untreated crimes.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int crime = 0;
    int recruits = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a == -1)
        {
            if (recruits > 0)
            {
                recruits--;
            }
            else
            {
                crime++;
            }
        }
        else
        {
            recruits += a;
        }
    }
    
    cout << crime << endl;
    return 0;
}