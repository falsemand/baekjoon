#include <bits/stdc++.h>

using namespace std;

int t, n;
long long dp[101];

void solution()
{
    cin >> t;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    dp[6] = 3;
    dp[7] = 4;
    dp[8] = 5;
    dp[9] = 7;
    dp[10] = 9;

    for (long long i = 11; i < 101; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    while (t--)
    {
        cin >> n;
        cout << dp[n] << "\n";
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
