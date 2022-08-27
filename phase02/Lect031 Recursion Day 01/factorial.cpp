#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1 or n == 0)
        return 1;

    // recurrance relation
    int ans = n * factorial(n - 1);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}