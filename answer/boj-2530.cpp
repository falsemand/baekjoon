#include <bits/stdc++.h>

using namespace std;

int a, b, c, t;

void solution()
{
    cin >> a >> b >> c;
    cin >> t;

    while (t)
    {
        if (t >= 3600)
        {
            a += (t / 3600);
            t %= 3600;
        }
        else if (t >= 60)
        {
            b += (t / 60);
            t %= 60;
        }
        else
        {
            c += t;
            t = 0;
        }
    }

    if (c >= 60)
    {
        b += (c / 60);
        c %= 60;
    }

    if (b >= 60)
    {
        a += (b / 60);
        b %= 60;
    }

    if (a >= 24)
    {
        a %= 24;
    }

    cout << a << " " << b << " " << c << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
