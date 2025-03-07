#include <bits/stdc++.h>

using namespace std;

void solution()
{
    vector<pair<int, string>> v(3);

    cin >> v[0].first >> v[1].first >> v[2].first;

    v[0].second = "Soongsil";
    v[1].second = "Korea";
    v[2].second = "Hanyang";

    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += v[i].first;

    if (sum >= 100)
        cout << "OK\n";
    else
    {
        sort(v.begin(), v.end(), [](pair<int, string> p1, pair<int, string> p2) { return p1.first < p2.first; });
        cout << v[0].second << "\n";
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