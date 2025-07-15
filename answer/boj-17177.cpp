#include <bits/stdc++.h>

using namespace std;

int a, b, c;

void solution()
{
    cin >> a >> b >> c;
    int p, q, r;
    p = a;
    q = 2 * b * c;
    r = a * (c * c - a * a + b * b);

    int d = q * q - 4 * p * r;

    if (d < 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        double x;
        x = (-q + sqrt(d)) / (2 * p);

        if (x < 0)
        {
            cout << -1 << "\n";
        }

        else
        {
            cout << (int)(x + 1e-5);
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
