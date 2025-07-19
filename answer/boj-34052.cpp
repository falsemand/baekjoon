#include <bits/stdc++.h>

using namespace std;

int temp, t;

void solution()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> temp;
        t += temp;
    }

    if (t + 300 > 1800)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
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
