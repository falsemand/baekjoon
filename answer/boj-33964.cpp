#include <bits/stdc++.h>

using namespace std;

int x, y;

int repunit(int num)
{
    int ret = 1;

    if (num == 1)
    {
        return ret;
    }

    else
    {
        num--;
    }

    while (num)
    {
        ret *= 10;
        ret += 1;

        num--;
    }

    return ret;
}

void solution()
{
    cin >> x >> y;

    int repunitX = repunit(x);
    int repunitY = repunit(y);

    cout << repunitX + repunitY << "\n";
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
