#include <bits/stdc++.h>

using namespace std;

int m, f;

void solution()
{
    while (true)
    {
        cin >> m >> f;

        if (0 == m && 0 == f)
            break;
        else
            cout << m + f << "\n";
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