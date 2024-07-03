#include <bits/stdc++.h>

using namespace std;

void sayDigits(int n, string arr[])
{

    // base case
    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;

    // recurrance relation
    sayDigits(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "sex", "seven", "eight", "nine"};
    cout << endl;
    sayDigits(n, arr);
    return 0;
}