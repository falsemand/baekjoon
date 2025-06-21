#include <bits/stdc++.h>

using namespace std;

int answer, t, n;
int sticker[2][100001];
int dp[2][100001];

void go()
{
    dp[0][0] = sticker[0][0];
    dp[1][0] = sticker[1][0];
    dp[0][1] = sticker[0][1] + dp[1][0];
    dp[1][1] = sticker[1][1] + dp[0][0];

    for (int i = 2; i < n; i++)
    {
        dp[0][i] = sticker[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
        dp[1][i] = sticker[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
    }

    cout << max(dp[0][n - 1], dp[1][n - 1]) << "\n";
}

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> sticker[i][j];
            }
        }

        go();
    }
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
