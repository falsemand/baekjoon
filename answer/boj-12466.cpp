#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[1001];

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a, a + m);

    int temp = 0, idx = 0, k = min(n, m);

    for (int i = 1; i <= k; i++)
    {
        if (temp <= i *a[m - i])
        {
            temp = i * a[m - i];
            idx = i;
        }
    }

    cout << a[m - idx] << " " << temp << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
