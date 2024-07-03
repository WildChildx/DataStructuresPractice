#include <bits/stdc++.h>
using namespace std;

string leftShift(string s)
{
    char temp = s[0];

    for (int i = 0; i < s.length() - 1; i++)
    {
        s[i] = s[i + 1];
    }

    s[s.length() - 1] = temp;

    return s;
}

string rightShift(string s)
{
    char temp = s[s.length() - 1];

    for (int i = s.length() - 1; i > 0; i--)
    {
        s[i] = s[i - 1];
    }

    s[0] = temp;

    return s;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        string s;
        cin >> s;
        // cout << leftShift(s) << " " << rightShift(s);
        if (s.length() == 1 or s.length() == 2)
            cout << "YES";
        else if (leftShift(s) == rightShift(s))
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}