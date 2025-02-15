#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;

        v.push_back(p);
    }

    sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) 
    {
        if(p1.first == p2.first)
            return p1.second < p2.second;

        return p1.first > p2.first;
    });

    cout << v[0].first << " " << v[0].second << " " << v[1].first << " " << v[1].second << "\n";

    sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) 
    {
        if(p1.second == p2.second)
            return p1.first > p2.first;

        return p1.second < p2.second;
    });

    cout << v[0].first << " " << v[0].second << " " << v[1].first << " " << v[1].second << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}