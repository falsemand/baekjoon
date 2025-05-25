#include <bits/stdc++.h>

using namespace std;

int n;
int dp[1001][3];
int color[3];

void solution()
{
    cin >> n;

    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> color[0] >> color[1] >> color[2];

        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + color[0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + color[1];
        dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + color[2];
    }

    cout << min(dp[n][2], min(dp[n][0], dp[n][1]));
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
