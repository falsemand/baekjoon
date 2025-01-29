#include <bits/stdc++.h>

using namespace std;

int t, v, e;

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> v >> e;
        cout << e - v + 2 << "\n";
    }

    return;
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}