#include <bits/stdc++.h>

using namespace std;

int answer, n, d, from, to, length;
vector<pair<int, int>> road[10001];
int cost[10001];

void go()
{
    cost[0] = 0;

    for (int i = 1; i <= d; i++)
    {
        if (road[i].size() == 0)
            cost[i] = cost[i - 1] + 1;
        else
        {
            for (auto p : road[i])
            {
                cost[i] = min(cost[i], min(cost[i - 1] + 1, cost[p.first] + p.second));
            }
        }
    }
}

void solution()
{
    cin >> n >> d;

    for (int i = 0; i < n; i++)
    {
        cin >> from >> to >> length;
        road[to].push_back({from, length});
    }

    fill(cost, cost + 10001, INT_MAX);

    go();

    cout << cost[d] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
