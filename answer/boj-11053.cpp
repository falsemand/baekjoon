#include <bits/stdc++.h>

using namespace std;

int answer, n;
int a[1001];
int lis[1001];

void solution()
{
    cin >> n;

    fill(lis, lis + 1001, INT_MAX);

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;

        int *lisIdx = lower_bound(lis, lis + n, num);

        if (*lisIdx == INT_MAX)
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
