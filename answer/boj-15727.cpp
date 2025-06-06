#include <bits/stdc++.h>

using namespace std;

int l;

void solution()
{
    cin >> l;

    if (l % 5 == 0)
        cout << l / 5 << "\n";
    else
        cout << l / 5 + 1 << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
