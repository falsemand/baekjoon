#include <bits/stdc++.h>

using namespace std;

int n, m;
int num[10];
int visited[10];
int answer[10];

void go(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << answer[i] << " ";
        }

        cout << "\n";

        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }

        answer[cnt] = num[i];
        visited[i] = 1;

        go(cnt + 1);

        answer[cnt] = 0;
        visited[i] = 0;
    }
}

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    sort(num, num + n);

    go(0);
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
