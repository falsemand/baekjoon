#include <bits/stdc++.h>

using namespace std;

int n, m, b;
int t, h;
int ground[501][501];

void solution()
{
    cin >> n >> m >> b;
    t = INT_MAX;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ground[i][j];

    for (int height = 0; height <= 256; height++)
    {
        int blockCnt = b;
        int workTime = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ground[i][j] > height)
                {
                    blockCnt += ground[i][j] - height;
                    workTime += (2 * (ground[i][j] - height));
                }
                else
                {
                    blockCnt -= height - ground[i][j];
                    workTime += height - ground[i][j];
                }
            }
        }

        if (blockCnt < 0)
            continue;

        if (t > workTime)
        {
            t = workTime;
            h = height;
        }

        else if (t == workTime)
        {
            h = max(h, height);
        }
    }

    cout << t << " " << h << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
