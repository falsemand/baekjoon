#include <bits/stdc++.h>

using namespace std;

int s, m;

void solution()
{
    cin >> s >> m;

    if (1024 > s)
        cout << "No thanks\n";
    else
    {
        s -= 1023;
        if ((s & m) == s)
            cout << "Thanks\n";
        else
            cout << "Impossible\n";
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