#include <bits/stdc++.h>

using namespace std;

int answer = 987654321, n;
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};
int v[20][20], p[20][20];

int setFlower(int y, int x)
{
    v[y][x] = 1;
    int s = p[y][x];

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        v[ny][nx] = 1;
        s += p[ny][nx];
    }

    return s;
}

bool check(int y, int x)
{
    if (v[y][x])
        return false;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= n || v[ny][nx])
            return false;
    }

    return true;
}

void eraseFlower(int y, int x)
{
    v[y][x] = 0;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        v[ny][nx] = 0;
    }
}

void flower(int cnt, int hap)
{
    if (cnt == 3)
    {
        answer = min(answer, hap);
        return;
    }

    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (check(i, j))
            {
                flower(cnt + 1, hap + setFlower(i, j));
                eraseFlower(i, j);
            }
        }
    }
}

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }

    flower(0, 0);

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
