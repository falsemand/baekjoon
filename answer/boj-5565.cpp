#include <bits/stdc++.h>

using namespace std;

int total;

void solution()
{
    cin >> total;

    for (int i = 0; i < 9; i++)
    {
        int price;
        cin >> price;

        total -= price;
    }

    cout << total << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}