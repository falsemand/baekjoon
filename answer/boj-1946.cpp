#include <bits/stdc++.h>

using namespace std;

int t, n;

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            v.push_back({a, b});
        }

        sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2)
             { return p1.first < p2.first; });

        int answer = 1;
        int interview = v[0].second;

        for (int i = 1; i < n; i++)
        {
            if (v[i].second < interview)
            {
                answer++;
                interview = v[i].second;
            }
        }

        cout << answer << "\n";
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
