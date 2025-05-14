#include <bits/stdc++.h>

using namespace std;

int x, y;

void solution()
{
    cin >> x >> y;

    if (x > y)
    {
        cout << x + y << "\n";
    }
    else
    {
        cout << y - x << "\n";
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
