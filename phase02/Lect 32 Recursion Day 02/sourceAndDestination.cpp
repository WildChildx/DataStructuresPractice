#include <bits/stdc++.h>

using namespace std;

void reached(int src, int dest)
{
    cout << "source:" << src << " destination:" << dest << endl;

    // base case
    if (src == dest)
    {
        cout << "Reached home" << endl;
        return;
    }

    // recurrance relation
    reached(src + 1, dest);
}

int main()
{
    int dest = 10, src = 1;
    reached(src, dest);
    return 0;
}