#include <bits/stdc++.h>

using namespace std;

int answer, r, c;
int visited[30];
char a[21][21];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};

void go(int y, int x, int cnt)
{
    answer = max(answer, cnt);

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= r || nx < 0 || nx >= c)
            continue;

        int next = (int)(a[ny][nx] - 'A');

        if (visited[next] == 0)
        {
            visited[next] = 1;
            go(ny, nx, cnt + 1);
            visited[next] = 0;
        }
    }
}

void solution()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    visited[(int)a[0][0] - 'A'] = 1;
    go(0, 0, 1);
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
