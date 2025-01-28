#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 1; i * i <= n; i++)
    {
        if(0 == n % i)
        {
            v.push_back({i, n / i});

            if(i != n / i)
                v.push_back({-i, -n / i});
        }
    }

    for(auto [a,c] : v)
    {
        int bd = -(n + 2);

        for (int b = -abs(bd); b <= abs(bd); b++)
        {
            if(0 != b && 0 == bd % b)
            {
                int d = bd / b;

                if(n + 1 == a * d + b * c)
                {
                    cout << a << " " << b << " " << c << " " << d << "\n";
                    return;
                }
            }
        }
    }

    cout << -1 << "\n";
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}