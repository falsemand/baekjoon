#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000000

int n;
int dp[1000001];

void solution()
{
    cin >> n;

    if (n < 0)
    {
        n = abs(n);

        if (n & 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    else if (n == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MAX;
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
