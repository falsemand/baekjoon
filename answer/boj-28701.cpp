#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;

    long long x = (n + 1) * n / 2;

    cout << x << "\n";
    cout << (int)pow(x, 2) << "\n";
    cout << (int)pow(x, 2) << "\n";
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
