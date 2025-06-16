#include <bits/stdc++.h>

using namespace std;

int n, m;
int numbers[9];
int visited[9];
int answer[9];

void go(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << answer[i] << " ";
        }

        cout << "\n";

        return;
    }

    int prev = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        if (numbers[i] == prev)
            continue;

        answer[cnt] = numbers[i];
        prev = answer[cnt];

        visited[i] = true;
        go(cnt + 1);
        visited[i] = false;
    }
}

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    sort(numbers, numbers + n);

    go(0);
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
