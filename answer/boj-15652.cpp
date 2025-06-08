#include <bits/stdc++.h>

using namespace std;

int n, m;
int numbers[9];

void dfs(int num, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << numbers[i] << " ";
        }

        cout << "\n";

        return;
    }

    for (int i = num; i <= n; i++)
    {
        numbers[cnt] = i;
        dfs(i, cnt + 1);
    }
}

void solution()
{
    cin >> n >> m;
    dfs(1, 0);
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
