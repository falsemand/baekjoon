#include <bits/stdc++.h>

using namespace std;

int n, m;

void solution()
{
    cin >> n >> m;

    vector<int> v(n + m, 0);

    for (int i = 0; i < n + m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    cout << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
