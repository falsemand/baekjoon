#include <bits/stdc++.h>

using namespace std;

int t, n, m, x, y;

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> m >> n >> x >> y;

        while (true)
        {
            if (x == y)
            {
                cout << x << "\n";
                break;
            }

            if (x > m * n)
            {
                cout << -1 << "\n";
                break;
            }

            if (x < y)
                x += m;
            else
                y += n;
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
