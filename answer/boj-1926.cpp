#include <bits/stdc++.h>

using namespace std;

int n, m, y, x;
int pic[501][501];
int visited[501][501];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};
int num, picSize;

void bfs(int y, int x)
{
    queue<pair<int, int>> q;
    q.push({y, x});

    int temp = 1;

    while (!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();

        visited[y][x] = 1;

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;

            if (visited[ny][nx] || pic[ny][nx] == 0)
                continue;

            temp++;
            visited[ny][nx] = 1;

            q.push({ny, nx});
        }
    }

    picSize = max(picSize, temp);
}

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> pic[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && pic[i][j] == 1)
            {
                visited[i][j] = 1;
                num++;

                bfs(i, j);
            }
        }
    }

    cout << num << "\n";
    cout << picSize << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
