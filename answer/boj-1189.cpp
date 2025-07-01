#include <bits/stdc++.h>

using namespace std;

int answer, r, c, k;
char a[5][5];
int visited[5][5];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};

void go(int y, int x, int cnt)
{
    if (y == 0 && x == c - 1)
    {
        if (cnt == k)
        {
            answer++;
        }

        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= r || nx < 0 || nx >= c)
            continue;

        if (a[ny][nx] == 'T')
            continue;

        if (visited[ny][nx])
            continue;

        visited[ny][nx] = 1;
        go(ny, nx, cnt + 1);
        visited[ny][nx] = 0;
    }
}

void solution()
{
    cin >> r >> c >> k;

    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            a[i][j] = s[j];
        }
    }

    visited[r - 1][0] = 1;
    go(r - 1, 0, 1);

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
