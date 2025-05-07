#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n, start;

void solution()
{
    cin >> n;
    cin >> start;

    if (n > 5)
    {
        cout << "Love is open door\n";
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (start == 0)
            {
                cout << 1 << "\n";
                start = 1;
            }
            else
            {
                cout << 0 << "\n";
                start = 0;
            }
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
