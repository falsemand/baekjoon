#include <bits/stdc++.h>

using namespace std;

int n, k, s, answerX, answerY;
int test[201][201];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};
queue<pair<int, int>> q[1001];

void bfs(int virus)
{
    int qSize = q[virus].size();
    int y, x;

    while (qSize)
    {
        qSize--;

        tie(y, x) = q[virus].front();
        q[virus].pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= n)
            {
                continue;
            }

            if (test[ny][nx] == 0)
            {
                test[ny][nx] = virus;
                q[virus].push({ny, nx});
            }
        }
    }
}

void solution()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> test[i][j];

            if (test[i][j] != 0)
            {
                q[test[i][j]].push({i, j});
            }
        }
    }

    cin >> s >> answerX >> answerY;

    for (int i = 0; i < s; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            bfs(j);
        }
    }

    cout << test[answerX - 1][answerY - 1] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
