#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll answer, n;

void solution()
{
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll odd = 0, even = 0, moveOdd = 0, moveEven = 0;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] % 2)
        {
            even++;
            moveOdd += odd;
        }
        else
        {
            odd++;
            moveEven += even;
        }
    }

    answer = min(moveOdd, moveEven);

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