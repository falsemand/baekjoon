#include <bits/stdc++.h>

using namespace std;

int answer, t, n;
int cycle[1001];
int visited[1001];

void go(int node)
{
    visited[node] = 1;

    if (visited[cycle[node]])
    {
        answer++;
        return;
    }

    go(cycle[node]);
}

void solution()
{
    cin >> t;

    while (t--)
    {
        answer = 0;
        memset(visited, 0, sizeof(int) * 1001);

        cin >> n;

        for (int i = 1; i <= n; i++)
            cin >> cycle[i];

        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                go(i);
            }
        }

        cout << answer << "\n";
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