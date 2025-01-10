#include <bits/stdc++.h>

using namespace std;

int n, m, mn, mx;

void solution()
{
    cin >> n >> m;
    vector<pair<int, int>> v(n + 1, {-1, -1});

    while(m--)
    {
        int a, c;
        char b;

        cin >> a >> b >> c;

        if(b == 'P')
            v[a].first = c;
        
        else if(b == 'M')
            v[a].second = c;
    }

    for (int i = 1; i <= n; i++)
    {
        if(v[i].first != 0 && v[i].second != 1)
        {
            mx++;

            if(v[i].first == 1 && v[i].second == 0)
                mn++;
        }
    }

    cout << mn << " " << mx << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}