#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;

        v.push_back({end, start});
    }

    sort(v.begin(), v.end());

    answer++;
    int last = v[0].first;

    for (int i = 1; i < n; i++)
    {
        if (last <= v[i].second)
        {
            answer++;
            last = v[i].first;
        }
    }

    cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
