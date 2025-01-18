#include <bits/stdc++.h>

using namespace std;

long long q, a, b;

void solution()
{
    cin >> q;

    while(q--)
    {
        cin >> a >> b;

        if(a < b && b % a == 0)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
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