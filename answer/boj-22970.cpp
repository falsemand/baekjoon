#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    answer = 1;
    for (int i = 0; i < n; i++)
    {
        int up = i;

        while(up + 1 < n && v[up] < v[up + 1])
            up++;

        int down = up;

        while(down + 1 < n && v[down] > v[down + 1])
            down++;

        answer = max(answer, down - i + 1);

        i = up;
    }

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