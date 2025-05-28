#include <bits/stdc++.h>

using namespace std;

void solution()
{
    long long a, b, c, x, y;

    cin >> a >> b >> c;
    x = (double)(a * b) / c;
    y = ((double)a / b) * c;
    cout << max(x, y) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
