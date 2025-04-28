#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll answer, n, m;
priority_queue<ll, vector<ll>, greater<ll>> pq;

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        pq.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();

        pq.push(a + b);
        pq.push(a + b);
    }

    while (!pq.empty())
    {
        answer += pq.top();
        pq.pop();
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