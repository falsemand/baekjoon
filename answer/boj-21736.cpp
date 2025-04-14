#include <bits/stdc++.h>

using namespace std;

int answer, n, m;
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};
int visited[601][601];
string campus[601];
int y, x;

void solution()
{
    cin >> n >> m;

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        cin >> campus[i];

        if (flag)
        {
            for (int j = 0; j < campus[i].size(); j++)
            {
                if (campus[i][j] == 'I')
                {
                    y = i;
                    x = j;

                    flag = false;

                    break;
                }
            }
        }
    }

    queue<pair<int, int>> q;
    q.push({y, x});

    while (!q.empty())
    {
        tie(y, x) = q.front();

        visited[y][x] = 1;
        q.pop();

        if (campus[y][x] == 'P')
            answer++;

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;

            if (campus[ny][nx] == 'X')
                continue;

            if (visited[ny][nx])
                continue;

            visited[ny][nx] = 1;
            q.push({ny, nx});
        }
    }

    if (answer == 0)
        cout << "TT\n";
    else
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
