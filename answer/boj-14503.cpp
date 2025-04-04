#include <bits/stdc++.h>

using namespace std;

int n, m, r, c, d;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int room[51][51];

int answer;

void go(int r, int c, int d)
{
    if (room[r][c] == 0)
    {
        answer++;
        room[r][c] = 2;
    }

    bool isClean = true;

    for (int i = 0; i < 4; i++)
    {
        int ny = r + dy[i];
        int nx = c + dx[i];

        if (ny < 0 || ny > n || nx < 0 || nx > m)
            continue;

        if (room[ny][nx] == 0)
        {
            isClean = false;
            break;
        }
    }

    if (isClean)
    {
        int dir = d;
        dir += 2;

        if (dir > 3)
            dir -= 4;

        int ny = r + dy[dir];
        int nx = c + dx[dir];

        if (room[ny][nx] == 1)
            return;

        go(ny, nx, d);
    }

    else
    {
        d -= 1;

        if (d < 0)
            d = 3;

        int ny = r + dy[d];
        int nx = c + dx[d];

        if (room[ny][nx] == 0)
        {
            go(ny, nx, d);
        }

        else
        {
            go(r, c, d);
        }
    }
}

void solution()
{
    cin >> n >> m;
    cin >> r >> c >> d;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> room[i][j];
    }

    go(r, c, d);

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