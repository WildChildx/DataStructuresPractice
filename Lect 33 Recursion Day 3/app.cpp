#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a1, a2;
    unordered_map<int, int> m1, m2;
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a1.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a2.push_back(num);
    }

    for (auto i : a1)
        m1[i]++;

    for (auto i : a1)
        m2[i]++;

    for (int i = 0; i < n; i++)
    {
        cout << m1[a1[i]] << " ";
    }

    // cout << ans;

    return 0;
}