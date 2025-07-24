#include <bits/stdc++.h>

using namespace std;

int n, m;

void solution()
{
    cin >> n >> m;

    if (n * 100 >= m)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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
