#include <bits/stdc++.h>

using namespace std;

int n, m;

void solution()
{
    cin >> n >> m;

    vector<int> v(n + 1, 0);
    vector<int> psum(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        psum[i] = psum[i - 1] + v[i];

    while (m--)
    {
        int a, b;

        cin >> a >> b;
        cout << psum[b] - psum[a - 1] << "\n";
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
