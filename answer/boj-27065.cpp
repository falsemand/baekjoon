#include <bits/stdc++.h>

using namespace std;

int t, n;
int dp[5001];

void solution()
{
    cin >> t;

    for (int i = 2; i <= 5000; i++)
    {
        int sum = 0;
        bool flag = true;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;

                if (dp[j])
                {
                    flag = false;
                }
            }
        }

        if (sum > i)
        {
            if (flag)
            {
                dp[i] = 2;
            }
            else
            {
                dp[i] = 1;
            }
        }
    }

    while (t--)
    {
        cin >> n;

        if (dp[n] == 2)
        {
            cout << "Good Bye\n";
        }
        else
        {
            cout << "BOJ 2022\n";
        }
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
