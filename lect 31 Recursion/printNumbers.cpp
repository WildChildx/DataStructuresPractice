#include <bits/stdc++.h>

using namespace std;

void countingNumbers(int n)
{
    // base case
    if (n == 0)
        return;

    cout << n << endl;
    // recurrance relation
    countingNumbers(n - 1);
}

int main()
{
    int n;
    cin >> n;
    countingNumbers(n);
    return 0;
}