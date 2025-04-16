#include <bits/stdc++.h>

using namespace std;

int answer, n, r, c;

void go(int y, int x, int size)
{
    if (y == r && x == c)
    {
        cout << answer << "\n";
        return;
    }

    else if (c < x + size && c >= x && r < y + size && r >= y)
    {
        go(y, x, size / 2);
        go(y, x + size / 2, size / 2);
        go(y + size / 2, x, size / 2);
        go(y + size / 2, x + size / 2, size / 2);
    }

    else
    {
        answer += pow(size, 2);
    }
}

void solution()
{
    cin >> n >> r >> c;
    go(0, 0, pow(2, n));
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
