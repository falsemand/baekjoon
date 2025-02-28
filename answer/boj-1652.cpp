#include <bits/stdc++.h>

using namespace std;

int row, col, n;
char room[101][101];

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> room[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if ('.' == room[i][j])
                cnt++;
            else if ('X' == room[i][j])
            {
                if (cnt > 1)
                    row++;
                    
                cnt = 0;
            }
        }

        if (cnt > 1)
            row++;
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if ('.' == room[j][i])
                cnt++;
            else if ('X' == room[j][i])
            {
                if (cnt > 1)
                    col++;

                cnt = 0;
            }
        }

        if (cnt > 1)
            col++;
    }

    cout << row << "\n";
    cout << col << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}