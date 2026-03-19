// Problem: Word Capitalization (Codeforces 281A)
// Topic: Strings
// Difficulty: 800
// Idea: Convert the first character of the string to uppercase.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char small[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char Big[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 0; i < 26; i++)
    {
        if (s[0] == small[i])
        {
            s[0] = Big[i];
            break;
        }
    }

    cout << s << endl;

    return 0;
}