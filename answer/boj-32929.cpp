#include <bits/stdc++.h>

using namespace std;

int x;

void solution()
{
    cin >> x;

    if (x % 3 == 0)
    {
        cout << "S\n";
    }
    else if (x % 3 == 1)
    {
        cout << "U\n";
    }
    else if (x % 3 == 2)
    {
        cout << "O\n";
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
