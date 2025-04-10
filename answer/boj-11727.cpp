#include <bits/stdc++.h>

using namespace std;

long long n;
long long dp[1001];

void solution()
{
    cin >> n;

    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;

    for (long long i = 4; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 10007;
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
