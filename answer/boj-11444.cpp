#include <bits/stdc++.h>

using namespace std;

#define div 1000000007LL
using ll = long long;

ll n;
map<ll, ll> f;

ll fibo(ll n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (f.count(n) > 0)
        return f[n];

    if (n % 2 == 0)
    {
        ll m = n / 2;
        ll temp1 = fibo(m - 1);
        ll temp2 = fibo(m);
        f[n] = ((2LL * temp1 + temp2) * temp2) % div;
        return f[n];
    }
    ll m = (n + 1) / 2;
    ll temp1 = fibo(m);
    ll temp2 = fibo(m - 1);
    f[n] = (temp1 * temp1 + temp2 * temp2) % div;
    return f[n];
}

void solution()
{
    cin >> n;
    cout << fibo(n) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
