#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;
    cout << (int)(n * 0.78) << " " << (int)((n * 0.8) + (n * 0.156)) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}