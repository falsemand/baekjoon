#include <bits/stdc++.h>

using namespace std;

int answer, x;

void solution()
{
    cin >> x;

    while (x > 0)
    {
        if (x % 2 == 1)
        {
            answer++;
        }

        x /= 2;
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
