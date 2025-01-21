#include <bits/stdc++.h>

using namespace std;

int answer, n, m;
int apt[10001];

void solution()
{
    cin >> n >> m;

    int son = n % (m * 2);

    if(0 == son)
        son = m * 2;

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;

        apt[l] = apt[r] = i + 1;
    }

    int floor = 1;
    for (int i = 1; i < 10001; i++)
    {
        if(apt[i] != 0)
        {
            if(floor == son)
            {
                answer = apt[i];
                break;
            }

            else
                floor++;
        }
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