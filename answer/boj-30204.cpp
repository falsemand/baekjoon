#include <bits/stdc++.h>

using namespace std;

int n, x, sum;

void solution()
{
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        sum += num;
    }

    if (0 == sum % x)
        cout << 1 << "\n";
    else
        cout << 0 << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}