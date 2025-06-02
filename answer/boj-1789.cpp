#include <bits/stdc++.h>

using namespace std;

long long s, n;

void solution()
{
    cin >> s;
    n = 1;

    while (true)
    {
        if (n * (n + 1) > 2 * s)
        {
            n--;
            break;
        }

        n++;
    }

    cout << n << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
