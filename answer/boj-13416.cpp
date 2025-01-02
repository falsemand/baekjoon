#include <bits/stdc++.h>

using namespace std;

int t, n, a, b, c;

void solution()
{
    cin >> t;

    while (t--)
    {
        int answer = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> c;

            int maxNumber = max({a, b, c});

            if (maxNumber <= 0)
                continue;

            answer += maxNumber;
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