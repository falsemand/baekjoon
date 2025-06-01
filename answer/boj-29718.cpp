#include <bits/stdc++.h>

using namespace std;

int psum[2001][2001];
int answer, n, m;
int a;

void solution()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> psum[i][j];
            psum[i][j] += psum[i][j - 1];
        }
    }

    cin >> a;

    for (int j = 1; j + a - 1 <= m; j++)
    {
        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += psum[i][j + a - 1] - psum[i][j - 1];
        }

        answer = max(answer, sum);
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
