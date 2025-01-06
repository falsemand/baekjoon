#include <bits/stdc++.h>

using namespace std;

int answer, n, m, x, y, cnt;

void solution()
{
    cin >> n;
    cin >> m;

    vector<int> walls(n - 1, 1);

    while (m--)
    {
        cin >> x >> y;

        for (int i = x - 1; i < y - 1; i++)
            walls[i] = 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (walls[i] == 1)
            cnt++;
    }

    answer = cnt + 1;

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