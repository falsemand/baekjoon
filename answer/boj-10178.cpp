#include <bits/stdc++.h>

using namespace std;

int t, c, v;
void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> c >> v;
        cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
