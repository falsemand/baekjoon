#include <bits/stdc++.h>

using namespace std;

const int maxValue = 500000;

int answer, n, k, flag;
int turn = 1;
int visited[2][maxValue + 4];

void solution()
{
    cin >> n >> k;

    if (n == k)
    {
        cout << 0 << "\n";
        return;
    }

    queue<int> q;
    q.push(n);

    visited[0][n] = 1;

    while (q.size())
    {
        k += turn;

        if (k > maxValue)
        {
            break;
        }

        if (visited[turn % 2][k])
        {
            flag = 1;
            break;
        }

        int qSize = q.size();

        for (int i = 0; i < qSize; i++)
        {
            int x = q.front();
            q.pop();

            for (int nx : {x + 1, x - 1, x * 2})
            {
                if (nx < 0 || nx > maxValue || visited[turn % 2][nx])
                {
                    continue;
                }

                visited[turn % 2][nx] = visited[(turn + 1) % 2][x] + 1;

                if (nx == k)
                {
                    flag = 1;
                    break;
                }

                q.push(nx);
            }

            if (flag)
            {
                break;
            }
        }

        if (flag)
        {
            break;
        }

        turn++;
    }

    if (flag)
    {
        cout << turn << "\n";
    }
    else
    {
        cout << -1 << "\n";
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
