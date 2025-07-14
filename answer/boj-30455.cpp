#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;

    if (n & 1)
    {
        cout << "Goose\n";
    }
    else
    {
        cout << "Duck\n";
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
