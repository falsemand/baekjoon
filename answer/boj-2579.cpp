#include <bits/stdc++.h>

using namespace std;

int n;
int stairs[301];
int dp[301];

void solution()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> stairs[i];
    }

    dp[1] = stairs[1];
    dp[2] = stairs[2] + stairs[1];
    dp[3] = stairs[3] + max(stairs[2], stairs[1]);

    for (int i = 4; i <= n; i++)
    {
        dp[i] = stairs[i] + max(dp[i - 3] + stairs[i - 1], dp[i - 2]);
    }

    cout << dp[n] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
