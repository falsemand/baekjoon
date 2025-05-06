#include <bits/stdc++.h>

using namespace std;

int n, m, k, layer;
int loc[1001][1001];
int visited[11][1001][1001];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};

int bfs(int y, int x)
{
    if (y == n - 1 && x == m - 1)
        return 1;

    queue<tuple<int, int, int>> q;
    q.push({0, y, x});

    visited[0][y][x] = 1;

    while (!q.empty())
    {
        tie(layer, y, x) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;

            if (ny == n - 1 && nx == m - 1)
                return visited[layer][y][x] + 1;

            if (visited[layer][ny][nx])
                continue;

            if (loc[ny][nx] == 1)
            {
                if (layer == k)
                    continue;

                if (visited[layer + 1][ny][nx])
                    continue;

                visited[layer + 1][ny][nx] = visited[layer][y][x] + 1;
                q.push({layer + 1, ny, nx});
            }
            else
            {
                if (visited[layer][ny][nx])
                    continue;

                visited[layer][ny][nx] = visited[layer][y][x] + 1;
                q.push({layer, ny, nx});
            }
        }
    }

    return -1;
}

void solution()
{
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            loc[i][j] = s[j] - '0';
        }
    }

    cout << bfs(0, 0) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
