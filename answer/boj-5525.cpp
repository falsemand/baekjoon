#include <bits/stdc++.h>

using namespace std;

#define MAX 1000001

int answer;
int n, m;
string s;

void solution()
{
    cin >> n;
    cin >> m;

    cin >> s;

    for (int i = 0; i < m; i++)
    {
        int cnt = 0;

        if (s[i] == 'I')
        {
            while (s[i + 1] == 'O' && s[i + 2] == 'I')
            {
                cnt++;

                if (cnt == n)
                {
                    answer++;
                    cnt--;
                }

                i += 2;
            }
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
