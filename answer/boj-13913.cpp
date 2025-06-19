#include <bits/stdc++.h>

using namespace std;

#define MAX 200002

int answer, n, k;

int visited[MAX], prv[MAX];

void solution()
{
    cin >> n >> k;

    visited[n] = 1;

    queue<int> q;
    q.push(n);

    while (q.size())
    {
        int now = q.front();
        q.pop();

        if (now == k)
        {
            answer = visited[k];
            break;
        }

        for (int next : {now + 1, now - 1, now * 2})
        {
            if (next >= MAX || next < 0 || visited[next])
            {
                continue;
            }

            visited[next] = visited[now] + 1;
            prv[next] = now;
            q.push(next);
        }
    }

    vector<int> v;
    for (int i = k; i != n; i = prv[i])
    {
        v.push_back(i);
    }

    v.push_back(n);
    reverse(v.begin(), v.end());

    cout << answer - 1 << "\n";

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
