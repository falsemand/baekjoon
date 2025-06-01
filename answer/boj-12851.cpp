#include <bits/stdc++.h>

using namespace std;

#define MAX 200000

int n, m;
int visited[MAX + 1];
long long cnt[MAX + 1];

void bfs()
{
    visited[n] = 1;
    cnt[n] = 1;

    queue<int> q;
    q.push(n);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int next : {node - 1, node + 1, node * 2})
        {
            if (0 <= next && next <= MAX)
            {
                if (!visited[next])
                {
                    q.push(next);
                    visited[next] = visited[node] + 1;
                    cnt[next] += cnt[node];
                }
                else if (visited[next] == visited[node] + 1)
                {
                    cnt[next] += cnt[node];
                }
            }
        }
    }
}

void solution()
{
    cin >> n >> m;

    if (n == m)
    {
        cout << 0 << "\n1\n";
        return;
    }

    bfs();

    cout << visited[m] - 1 << "\n";
    cout << cnt[m] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
