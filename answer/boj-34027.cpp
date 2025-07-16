#include <bits/stdc++.h>

using namespace std;

int t, n;

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> n;

        int sq = sqrt(n);

        if (sq * sq == n)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
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
