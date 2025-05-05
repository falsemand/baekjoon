#include <bits/stdc++.h>

using namespace std;

int start, last, n, m;
int loc[1001][1001];
int visited[1001][1001];
int blocked[1001][1001];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};

void bfs(int y, int x)
{
    queue<pair<int, int>> q;
    q.push({y, x});

    visited[y][x] = 1;

    while (!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;

            if (visited[ny][nx])
                continue;

            if (loc[ny][nx] == 1 && blocked[y][x] == 1)
                continue;

            if (loc[ny][nx] == 1 && blocked[y][x] == 0)
            {
                blocked[ny][nx]++;
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
            else
            {
                blocked[ny][nx] = blocked[y][x];
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
}

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            loc[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);
    start = visited[n - 1][m - 1];

    for (int i = 0; i < n; i++)
        fill(&visited[i][0], &visited[i][0] + m, 0);

    for (int i = 0; i < n; i++)
        fill(&blocked[i][0], &blocked[i][0] + m, 0);

    bfs(n - 1, m - 1);
    last = visited[0][0];

    if (start == 0 && last == 0)
        cout << -1 << "\n";
    else
    {
        if (start == 0)
            cout << last << "\n";
        else if (last == 0)
            cout << start << "\n";
        else
            cout << min(start, last) << "\n";
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
