#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll answer, n;

void solution()
{
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ll cnt = 0;

        for (ll j = i + 1; j < n; j++)
        {
            if (v[i] <= v[j])
            {
                break;
            }

            cnt++;
        }

        answer += cnt;
    }

    cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
