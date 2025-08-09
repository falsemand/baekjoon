#include <bits/stdc++.h>

using namespace std;

int n;

void p1()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= n * 5; j++)
        {
            if(j <= n || j > n * 4)
            {
                cout << '@';
            }

            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

void p2()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n * 5; j++)
        {
            cout << '@';
        }
        cout << '\n';
    }
}

void solution()
{
    cin >> n;

    p1();
    p1();
    p2();
    p1();
    p2();
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
