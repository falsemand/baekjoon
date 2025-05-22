#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;

    for (int i = n; i >= 0; i--)
    {
        if (i == 1)
        {
            cout << i << " bottle of beer on the wall, " << i << " bottle of beer.\n";
            cout << "Take one down and pass it around, no more bottles of beer on the wall.\n";
            cout << "\n";
        }
        else if (i == 0)
        {
            cout << "No more bottles of beer on the wall, no more bottles of beer.\n";

            if (n == 1)
            {
                cout << "Go to the store and buy some more, " << n << " bottle of beer on the wall.\n";
            }
            else if (n == 0)
            {
                cout << "Go to the store and buy some more, no more bottles of beer on the wall.\n";
            }

            else
            {
                cout << "Go to the store and buy some more, " << n << " bottles of beer on the wall.\n";
            }
        }
        else
        {
            cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";

            if (i - 1 == 1)
            {
                cout << "Take one down and pass it around, " << i - 1 << " bottle of beer on the wall.\n";
            }
            else
            {
                cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n";
            }

            cout << "\n";
        }
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
