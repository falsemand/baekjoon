#include <bits/stdc++.h>

using namespace std;

int a, b;

void solution()
{
    cin >> a >> b;

    if (a % 2 == 0 && b % 2 != 0)
    {
        cout << (b - a) / 2 + 2 << "\n";
    }
    else
    {
        cout << (b - a) / 2 + 1 << "\n";
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
