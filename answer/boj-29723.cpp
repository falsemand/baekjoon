#include <bits/stdc++.h>

using namespace std;

int n, m, k, mn, mx;

void solution()
{
    cin >> n >> m >> k;

    vector<pair<string, int>> klass;

    for (int i = 0; i < n; i++)
    {
        string s;
        int score;

        cin >> s >> score;

        klass.push_back({s, score});
    }

    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;

        for (int i = 0; i < klass.size(); i++)
        {
            if (klass[i].first == s)
            {
                mn += klass[i].second;
                mx += klass[i].second;

                klass.erase(klass.begin() + i);

                i--;
                n--;
                m--;
            }
        }
    }

    sort(klass.begin(), klass.end(), [](pair<string, int> p1, pair<string, int> p2)
         { return p1.second < p2.second; });

    int left = 0, right = n - 1;
    int cnt = 0;

    while (cnt < m)
    {
        mn += klass[left].second;
        mx += klass[right].second;

        left++;
        right--;
        cnt++;
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
