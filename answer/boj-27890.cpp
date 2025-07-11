#include <bits/stdc++.h>

using namespace std;

int x, n;

void solution()
{
    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        if (x % 2 == 0)
        {
            x = (x / 2) ^ 6;
        }
        else
        {
            x = (x * 2) ^ 6;
        }
    }

    cout << x << "\n";
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
