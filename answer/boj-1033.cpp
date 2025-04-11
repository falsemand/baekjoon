#include <bits/stdc++.h>

using namespace std;

int n, a, b, p, q;
vector<tuple<int, int, int>> A[10];
long mnLcm;
bool visited[10];
long D[10];

long gcd(long a, long b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

void DFS(int node)
{
    visited[node] = true;

    for (tuple<int, int, int> i : A[node])
    {
        int next = get<0>(i);

        if (!visited[next])
        {
            D[next] = D[node] * get<2>(i) / get<1>(i);
            DFS(next);
        }
    }
}

void solution()
{
    cin >> n;
    mnLcm = 1;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b >> p >> q;

        A[a].push_back({b, p, q});
        A[b].push_back({a, q, p});

        mnLcm *= (p * q / gcd(p, q));
    }

    D[0] = mnLcm;

    DFS(0);

    long mgcd = D[0];

    for (int i = 1; i < n; i++)
    {
        mgcd = gcd(mgcd, D[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << D[i] / mgcd << " ";
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
