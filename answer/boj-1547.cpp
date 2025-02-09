#include <bits/stdc++.h>

using namespace std;

int m, x, y;
int cup[3] = {1, 2, 3};

void solution()
{
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        int temp = cup[x - 1];
        cup[x - 1] = cup[y - 1];
        cup[y - 1] = temp;
    }

    for (int i = 0; i < 3; i++)
    {
        if(1 == cup[i])
        {
            cout << i + 1 << "\n";
            break;
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