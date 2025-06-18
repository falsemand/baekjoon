#include <bits/stdc++.h>

using namespace std;

int answer, n;
int tri[501][501];
int dp[501][501];

int maxValue(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void solution()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> tri[i][j];
        }
    }

    dp[1][1] = tri[1][1];

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = maxValue(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (answer < dp[n][i])
        {
            answer = dp[n][i];
        }
    }

    cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
