#include <bits/stdc++.h>

using namespace std;

long long int botScore(long long int N)
{
    if (N == 1 || N == 2)
        return 1;

    char turn = 'B';
    long long int botScore = 0;

    vector<char> game(N);

    for (long long int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            if (turn == 'B')
            {
                game[i] = turn;
                turn = 'J';
            }

            else if (turn == 'J')
            {
                game[i] = turn;
                turn = 'B';
            }
        }
    }

    for (long long int i = 0; i < N; i++)
    {
        if (game[i] == 'B')
            botScore++;
    }

    return botScore;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long long int N;
        cin >> N;
        cout << "Case #" << i + 1 << ": " << botScore(N) << endl;
    }

    return 0;
}