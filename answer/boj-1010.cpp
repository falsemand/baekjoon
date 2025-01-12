#include <bits/stdc++.h>

using namespace std;

int t, n, m;

void solution()
{
    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        int answer = 1;
        int temp = 1;

        for (int i = m; i > m - n; i--)
        {
            answer *= i;
            answer /= temp++;
        }

        cout << answer << "\n";
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