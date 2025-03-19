#include <bits/stdc++.h>

using namespace std;

int n, a, b;

void solution()
{
    cin >> n >> a >> b;

    if (a < b && a < n + a)
        cout << "Bus\n";
    else if (a > b && b < n + a)
        cout << "Subway\n";
    else
        cout << "Anything\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}