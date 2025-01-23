#include <bits/stdc++.h>

using namespace std;

long long n, a, p1, b, p2, x, y, mx;

void solution()
{
    cin >> n;
    cin >> a >> p1 >> b >> p2;

    for (long long i = 0; i * p1 <= n; i++)
    {
        long long j = (n - (i * p1)) / p2;
        long long sum = a * i + b * j;

        if(mx < sum && (i * p1 + j * p2) <= n)
        {
            mx = sum;
            x = i;
            y = j;
        }
    }

    cout << x << " " << y << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}