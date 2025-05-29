#include <bits/stdc++.h>

using namespace std;

int answer, k, cnt;
int password[3][3];
int visited[3][3];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};

void dfs(int y, int x)
{
    visited[y][x] = 1;
    cnt++;

    if (cnt == 9)
    {
        answer++;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= 3 || nx < 0 || nx >= 3)
            continue;

        if (visited[ny][nx])
            continue;

        dfs(ny, nx);

        visited[ny][nx] = 0;
        cnt--;
    }
}

void solution()
{
    cin >> k;

    int x = (k - 1) % 3;
    int y = (k - 1) / 3;

    dfs(y, x);

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
