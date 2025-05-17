#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pq;

void solution()
{
    cin >> n;

    for (int i = 0; i < n * n; i++)
    {
        int num;

        cin >> num;
        pq.push(num);

        if (pq.size() > n)
        {
            pq.pop();
        }
    }

    cout << pq.top() << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
