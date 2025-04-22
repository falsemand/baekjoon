#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;

ll facto(ll x)
{
    if (x <= 1)
        return 1;

    return x * facto(x - 1);
}

void solution()
{
    cin >> n;
    cout << facto(n) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
