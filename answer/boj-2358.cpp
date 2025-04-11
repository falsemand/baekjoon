#include <bits/stdc++.h>

using namespace std;

int answer, n;
map<int, int> pointX;
map<int, int> pointY;

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        pointX[x]++;
        pointY[y]++;
    }

    for (auto it : pointX)
    {
        if (it.second >= 2)
            answer++;
    }

    for (auto it : pointY)
    {
        if (it.second >= 2)
            answer++;
    }

    cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
