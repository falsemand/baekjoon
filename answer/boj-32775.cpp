#include <bits/stdc++.h>

using namespace std;

int s, f;

void solution()
{
    cin >> s >> f;

    if (s > f)
    {
        cout << "flight\n";
    }
    else
    {
        cout << "high speed rail\n";
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
