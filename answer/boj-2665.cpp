#include <bits/stdc++.h>

using namespace std;

int n;

int rooms[51][51];
int cntBreak[51][51];

const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};

void bfs()
{
    int y, x;
    queue<pair<int, int>> q;

    q.push({0, 0});
    cntBreak[0][0] = 0;

    while (!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= n)
                continue;

            if (rooms[ny][nx] == 1)
            {
                if (cntBreak[ny][nx] > cntBreak[y][x])
                {
                    cntBreak[ny][nx] = cntBreak[y][x];
                    q.push({ny, nx});
                }
            }
            else
            {
                if (cntBreak[ny][nx] > cntBreak[y][x] + 1)
                {
                    cntBreak[ny][nx] = cntBreak[y][x] + 1;
                    q.push({ny, nx});
                }
            }
        }
    }
}

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < n; j++)
        {
            rooms[i][j] = s[j] - '0';
            cntBreak[i][j] = INT_MAX;
        }
    }

    bfs();

    cout << cntBreak[n - 1][n - 1] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
