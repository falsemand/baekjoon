#include <bits/stdc++.h>

using namespace std;

int answer, n, m;
int visited[1001];
vector<int> g[1001];

void dfs(int node)
{
    visited[node] = 1;

    for (int i = 0; i < g[node].size(); i++)
    {
        if (!visited[g[node][i]])
            dfs(g[node][i]);
    }
}

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int from, to;

        cin >> from >> to;
        g[from].push_back(to);
        g[to].push_back(from);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            answer++;
        }
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
