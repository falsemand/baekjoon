#include <bits/stdc++.h>

using namespace std;

int n;
int dp[21];

void solution()
{
    cin >> n;

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < 21; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

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
