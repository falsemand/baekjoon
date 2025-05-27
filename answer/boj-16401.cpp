#include <bits/stdc++.h>

using namespace std;

int answer, n, m;

void solution()
{
    cin >> m >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int left = 1, right = v[n - 1];

    while (left <= right)
    {
        int mid = (left + right) / 2;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += v[i] / mid;
        }

        if (cnt < m)
        {
            right = mid - 1;
        }
        else
        {
            answer = mid;
            left = mid + 1;
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
