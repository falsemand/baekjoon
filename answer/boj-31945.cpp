#include <bits/stdc++.h>

using namespace std;

int t;
int p[4];

bool checkPlane(int i, int bit)
{
    for (int j = 1; j < 4; j++)
    {
        bool bit2 = (p[j] >> i) & 1;

        if(bit2 != bit)
        {
            return false;
        }
    }

    return true;
}

bool isPlane()
{
    for (int i = 0; i < 3; i++)
    {
        bool bit = (p[0] >> i) & 1;

        if(checkPlane(i,bit))
            return true;
    }

    return false;
}

void solution()
{
    cin >> t;
    while(t--)
    {
        for (int i = 0; i < 4; i++)
            cin >> p[i];

        bool flag = isPlane();
        cout << (flag ? "YES" : "NO") << "\n";
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