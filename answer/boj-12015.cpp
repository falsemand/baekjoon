#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll answer, n;
ll a[1000001];
ll lis[1000001];

void solution()
{
    cin >> n;

    fill(lis, lis + 1000001, LONG_MAX);

    for (int i = 1; i <= n; i++)
    {
        ll num;
        cin >> num;

        ll *lisIdx = lower_bound(lis, lis + n, num);

        if (*lisIdx == LONG_MAX)
        {
            answer++;
        }

        *lisIdx = num;
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
