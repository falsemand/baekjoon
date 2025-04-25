#include <bits/stdc++.h>

using namespace std;

#define MAX 100001

int answer, n, k;
int test[MAX];

void solution()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> test[i];

    int left = 0, right = accumulate(test, &test[n - 1] + 1, 0);

    while (left <= right)
    {
        int mid = (left + right) / 2;

        int cnt = 0, sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += test[i];

            if (sum >= mid)
            {
                cnt++;
                sum = 0;
            }
        }

        if (cnt >= k)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << right << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}