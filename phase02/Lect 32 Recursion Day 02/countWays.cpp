#include <bits/stdc++.h>

using namespace std;

int countWays(int n)
{
    // base case
    if (n == 0)
        return 1;

    if (n < 0)
        return 0;

    int ans = countWays(n - 1) + countWays(n - 2);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countWays(n) << " ways";
    return 0;
}