#include <bits/stdc++.h>

using namespace std;

#define MAX 100001

int n, k;
int visited[MAX];

void solution()
{
    cin >> n >> k;

    queue<int> q;
    q.push(n);
    visited[n] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (x == k)
            break;

        if (x - 1 >= 0 && !visited[x - 1])
        {
            visited[x - 1] = visited[x] + 1;
            q.push(x - 1);
        }

        if (x + 1 < MAX && !visited[x + 1])
        {
            visited[x + 1] = visited[x] + 1;
            q.push(x + 1);
        }

        if (2 * x < MAX && !visited[2 * x])
        {
            visited[2 * x] = visited[x] + 1;
            q.push(2 * x);
        }
    }

    cout << visited[k] - 1 << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
