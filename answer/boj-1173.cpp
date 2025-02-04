#include <bits/stdc++.h>

using namespace std;

int answer, N, m, M, T, R;

void solution()
{
    cin >> N >> m >> M >> T >> R;

    if (m + T > M)
        cout << -1 << "\n";

    else
    {
        int t = 0;
        int cur = m;

        while (t < N)
        {
            if (cur + T <= M)
            {
                cur += T;
                t++;
            }

            else
            {
                if (cur - R >= m)
                {
                    cur -= R;
                }

                else
                {
                    cur = m;
                }
            }

            answer++;
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