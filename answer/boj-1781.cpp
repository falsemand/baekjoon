#include <bits/stdc++.h>

using namespace std;

int answer, n;
vector<int> v[200001];

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int d, c;
        cin >> d >> c;

        v[d].push_back(c);
    }

    priority_queue<int, vector<int>, less<int>> pq;

    for (int i = n; i >= 1; i--)
    {
        for (auto p : v[i])
            pq.push(p);

        if (!pq.empty())
        {
            answer += pq.top();
            pq.pop();
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
