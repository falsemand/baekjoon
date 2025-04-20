#include <bits/stdc++.h>

using namespace std;

int n, l;

void solution()
{
    cin >> n >> l;

    int x = -1, cnt = 0;

    for (int i = l; i <= 100; i++)
    {
        int t = i * (i - 1) / 2;

        if ((n - t) % i == 0 && (n - t) / i >= 0)
        {
            x = (n - t) / i;
            cnt = i;
            break;
        }
    }

    if (x < 0)
        cout << x << "\n";

    for (int i = 0; i < cnt; i++)
        cout << x + i << " ";

    cout << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
