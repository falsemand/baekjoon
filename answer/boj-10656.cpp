#include <bits/stdc++.h>

using namespace std;

int answer, n, m;
char puzzle[51][51];
int visited[51][51];

bool isRange(int y, int x)
{
    return 1 <= y && y <= n && 1 <= x && x <= m;
}

void goRow(int y, int x)
{
    if(!isRange(y, x - 1) || '#' == puzzle[y][x - 1])
    {
        if (isRange(y, x + 1) && isRange(y, x + 2) && '#' != puzzle[y][x + 1] && '#' != puzzle[y][x + 2])
        {
           if(!visited[y][x])
           {
              visited[y][x] = 1;
              answer++;
           }
        }
     } 
}

void goCol(int y, int x)
{
    if (!isRange(y - 1, x) || '#' == puzzle[y - 1][x])
    {
        if (isRange(y + 1, x) && isRange(y + 2, x) && '#' != puzzle[y + 1][x] && '#' != puzzle[y + 2][x])
        {
           if(!visited[y][x])
           {
              visited[y][x] = 1;
              answer++;
           }
        }
     }
}

void solution()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> puzzle[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ('.' == puzzle[i][j])
            {
                goRow(i, j);
                goCol(i, j);
            }
        }
    }

    cout << answer << "\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (visited[i][j])
                cout << i << " " << j << "\n";
        }
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