#include <bits/stdc++.h>

using namespace std;

#define MAX 128

int white, blue, n;
int quadTree[MAX][MAX];

bool isSame(int y, int x, int size)
{
    bool ret = true;
    int color = quadTree[y][x];

    for (int i = y; i < y + size; i++)
    {
        if (!ret)
            break;

        for (int j = x; j < x + size; j++)
        {
            if (quadTree[i][j] != color)
            {
                ret = false;
                break;
            }
        }
    }

    return ret;
}

void go(int y, int x, int size)
{
    if (isSame(y, x, size))
    {
        if (quadTree[y][x] == 0)
            white++;
        else
            blue++;

        return;
    }

    go(y, x, size / 2);
    go(y, x + size / 2, size / 2);
    go(y + size / 2, x, size / 2);
    go(y + size / 2, x + size / 2, size / 2);
}

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> quadTree[i][j];

    go(0, 0, n);

    cout << white << "\n";
    cout << blue << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
