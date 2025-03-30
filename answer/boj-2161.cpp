#include <bits/stdc++.h>

using namespace std;

int n;
queue<int> q;

void solution()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();

        if (q.empty())
            break;

        int card = q.front();
        q.pop();
        q.push(card);
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