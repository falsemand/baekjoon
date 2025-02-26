#include <bits/stdc++.h>

using namespace std;

int t, n, m;

void solution()
{
    cin >> t;

    while(t--)
    {
        int answer = 0;
        cin >> n >> m;

        for (int a = 1; a < n; a++)
        {
            for (int b = a + 1; b < n; b++)
            {
                if (!((a * a + b * b + m) % (a * b)))
                    answer++;
            }
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