#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5 * n; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5 * n; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        cout << "\n";
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
