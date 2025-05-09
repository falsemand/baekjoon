#include <bits/stdc++.h>

using namespace std;

int n, m;

void solution()
{
    cin >> n >> m;

    vector<int> v(n, 0);

    for (int i = 0; i < v.size(); i++)
        v[i] = i + 1;

    do
    {
        for (int i = 0; i < m; i++)
            cout << v[i] << "\n";

        reverse(v.begin() + m, v.end());
    } while (next_permutation(v.begin(), v.end()));
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
