#include <bits/stdc++.h>

using namespace std;

int answer, kebin = INT_MAX;
int n, m;
vector<int> g[101];
int visited[101];

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
        queue<int> q;
        q.push(i);

        memset(visited, 0, sizeof(int) * 101);
        visited[i] = 1;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (int i = 0; i < g[node].size(); i++)
            {
                if (visited[g[node][i]])
                    continue;

                visited[g[node][i]] = visited[node] + 1;
                q.push(g[node][i]);
            }
        }

        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += (visited[i] - 1);
        }

        if (kebin > sum)
        {
            answer = i;
            kebin = sum;
        }

        else if (kebin == sum)
        {
            if (answer > i)
                answer = i;
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
