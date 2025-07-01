#include <bits/stdc++.h>

using namespace std;

const int INF = 987654321;
int answer = INF, n;
int a[44];

void go(int here)
{
    if (here == n + 1)
    {
        int sum = 0;

        for (int i = 1; i <= (1 << (n - 1)); i *= 2)
        {
            int cnt = 0;

            for (int j = 1; j <= n; j++)
            {
                if (a[j] &i)
                {
                    cnt++;
                }
            }
            sum += min(cnt, n - cnt);
        }

        answer = min(answer, sum);
        return;
    }

    go(here + 1);
    a[here] = ~a[here];
    go(here + 1);
}

void solution()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        int value = 1;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'T')
            {
                a[i] |= value;
            }

            value *= 2;
        }
    }

    go(1);

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
