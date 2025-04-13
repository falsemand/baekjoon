#include <bits/stdc++.h>

using namespace std;

#define MAX 50001

int n;
int dp[MAX];

void solution()
{
    cin >> n;

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        int mn = INT_MAX;

        for (int j = 1; j * j <= i; j++)
        {
            int temp = i - j * j;
            mn = min(mn, dp[temp]);
        }

        dp[i] = mn + 1;
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
