#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll answer, a[1000];
int n;

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        for (int j = 0; j < temp; j++)
        {
            int k;
            cin >> k;
            a[i] += k;
        }
    }

    sort(a, a + n);

    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        answer += a[i];
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
