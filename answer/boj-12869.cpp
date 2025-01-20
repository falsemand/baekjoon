#include <bits/stdc++.h>

using namespace std;

int answer, n;
int array[61][61][61];
int visited[61][61][61];
queue<tuple<int, int, int>> q;
int damages[6][3] =
    {
        {9, 3, 1}, 
        {9, 1, 3}, 
        {3, 1, 9}, 
        {3, 9, 1}, 
        {1, 3, 9}, 
        {1, 9, 3}
    };
int scv[3];

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> scv[i];

    visited[scv[0]][scv[1]][scv[2]] = 1;
    q.push(make_tuple(scv[0], scv[1], scv[2]));

    while(q.size())
    {
        int x, y, z;
        tie(x, y, z) = q.front();
        q.pop();

        if(visited[0][0][0])
            break;

        for (int i = 0; i < 6;i++)
        {
            int nx = max(0, x - damages[i][0]);
            int ny = max(0, y - damages[i][1]);
            int nz = max(0, z - damages[i][2]);

            if(visited[nx][ny][nz])
                continue;

            visited[nx][ny][nz] = visited[x][y][z] + 1;

            q.push(make_tuple(nx, ny, nz));
        }
    }

    answer = visited[0][0][0] - 1;

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