#include <bits/stdc++.h>

using namespace std;

int l, a, b, c, d;

void solution()
{
    cin >> l;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    while (true)
    {
        if (a <= 0 &&b <= 0)
        {
            break;
        }

        a -= c;
        b -= d;

        l--;
    }

    cout << l << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
