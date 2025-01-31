#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<string, string>> mm;

void solution()
{
    cin >> n;
    mm = vector<pair<string, string>>(n, {"", ""});

    for (int i = 0; i < n; i++)
        cin >> mm[i].first >> mm[i].second;

    sort(mm.begin(), mm.end(), [](pair<string, string> p1, pair<string, string> p2) 
    {
        if(p1.first == p2.first)
            return p1.second > p2.second;

        return p1.first < p2.first;
    });

    for (int i = 0; i < n; i++)
        cout << mm[i].first << " " << mm[i].second << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}