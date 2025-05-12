#include <bits/stdc++.h>

using namespace std;

int t, a1, b1, a2, b2, r1, r2;

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> a1 >> b1 >> r1 >> a2 >> b2 >> r2;

        int distance = (a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2);
        int cd1 = (r1 - r2) * (r1 - r2);
        int cd2 = (r1 + r2) * (r1 + r2);

        if (distance == 0)
        {
            if (cd1 == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (distance == cd1 || distance == cd2)
        {
            cout << 1 << "\n";
        }
        else if (cd1 < distance && cd2 > distance)
        {
            cout << 2 << "\n";
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
