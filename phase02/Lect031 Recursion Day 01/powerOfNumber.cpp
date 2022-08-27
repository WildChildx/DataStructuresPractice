#include <bits/stdc++.h>

using namespace std;

int powerOfTwo(int number, int power)
{
    // base case
    if (power == 0)
        return 1;

    // recurrance relation
    int ans = number * powerOfTwo(number, power - 1);
    return ans;
}

int main()
{
    int power, number;
    cin >> number >> power;
    cout << powerOfTwo(number, power);
    return 0;
}