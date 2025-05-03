#include <bits/stdc++.h>

using namespace std;

int n;
int tower[500001];
int reciver[500001];
stack<pair<int, int>> st;

int findReciver(int cur, int prev)
{
    if (prev == 0)
        return 0;

    if (tower[cur] <= tower[prev])
        return prev;
    else
        return findReciver(cur, reciver[prev]);
}

void solution()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> tower[i];
    }

    reciver[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        reciver[i] = findReciver(i, i - 1);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << reciver[i] << " ";
    }

    cout << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
