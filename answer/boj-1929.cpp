#include <bits/stdc++.h>

using namespace std;

int m, n;
int che[1000001];

void solution()
{
    cin >> m >> n;

    for (int i = 2; i <= n; i++)
    {
        che[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (che[i] == 0)
            continue;

        for (int j = i * i; j <= n; j += i)
            che[j] = 0;
    }

    for (int i = m; i <= n; i++)
    {
        if (che[i] != 0)
            cout << che[i] << "\n";
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
