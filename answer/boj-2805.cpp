#include <bits/stdc++.h>

using namespace std;

long long answer, n, m;

void solution()
{
    cin >> n >> m;
    vector<long long> tree(n, 0);

    long long left = 1;
    long long right = 1;

    for (long long i = 0; i < n; i++)
    {
        cin >> tree[i];
        right = max(right, tree[i]);
    }

    while (left <= right)
    {
        long long height = (left + right) / 2;
        long long sum = 0;

        for (long long i = 0; i < n; i++)
        {
            if (height < tree[i])
                sum += tree[i] - height;
        }

        if (sum >= m)
        {
            answer = height;
            left = height + 1;
        }

        else
        {
            right = height - 1;
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
