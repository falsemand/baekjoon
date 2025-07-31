#include <bits/stdc++.h>

using namespace std;

int c, n;
int a[1001];

void solution()
{
    cin >> c;

    while (c--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        float avg = (float)accumulate(a, a + n, 0) / (float)n;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (avg < a[i])
            {
                cnt++;
            }
        }

        cout << fixed;
        cout.precision(3);
        cout << ((float)cnt / (float)n) * 100.0f << "%\n";
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
