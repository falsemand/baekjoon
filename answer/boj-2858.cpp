#include <bits/stdc++.h>

using namespace std;

int r, b;

void solution()
{
    cin >> r >> b;

    for (int i = 3; i < 5001; i++)
    {
        for (int j = i; j >= 3; j--)
        {
            int tempB = (i - 2) * (j - 2);
            int tempR = i * j - tempB;

            if (tempR == r && tempB == b)
            {
                cout << i << " " << j << "\n";
                return;
            }
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
