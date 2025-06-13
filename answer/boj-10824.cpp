#include <bits/stdc++.h>

using namespace std;

string a, b, c, d;

void solution()
{
    cin >> a >> b >> c >> d;

    a += b;
    c += d;

    cout << stoll(a) + stoll(c) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
