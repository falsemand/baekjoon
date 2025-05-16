#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll b, n, m;

void solution()
{
    cin >> b >> n >> m;
    map<string, ll> goods;

    for (ll i = 0; i < n; i++)
    {
        ll price;
        string name;

        cin >> name >> price;
        goods[name] = price;
    }

    ll money = 0;
    for (ll i = 0; i < m; i++)
    {
        string name;
        cin >> name;

        money += goods[name];
    }

    if (money <= b)
    {
        cout << "acceptable\n";
    }
    else
    {
        cout << "unacceptable\n";
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
