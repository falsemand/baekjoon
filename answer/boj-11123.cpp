#include <bits/stdc++.h>

using namespace std;

int answer;
int t, h, w;

char grid[101][101];
int visited[101][101];

const int dy[4] = {1, 0, -1, 0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x)
{
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || ny > h || nx < 0 || nx > w)
            continue;
        
        if(visited[ny][nx])
            continue;

        if(grid[ny][nx] == '#')
            dfs(ny, nx);
    }
}

void solution()
{
    cin >> t;

    while (t--)
    {
        fill(&grid[0][0], &grid[100][100], 0);
        fill(&visited[0][0], &visited[100][100], 0);

        answer = 0;
        cin >> h >> w;

        for (int i = 0; i < h;i ++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < s.size(); j++)
                grid[i][j] = s[j];
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            { 
                if(grid[i][j] == '#' && !visited[i][j])
                {
                    dfs(i, j);
                    answer++;
                }
            }
        }

        cout << answer << "\n";
    }
    
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}