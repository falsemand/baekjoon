#include <bits/stdc++.h>

using namespace std;

int n, m, a1, b1, a2, b2;
int numbers[1025][1025];

void solution()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int temp;
            cin >> temp;

            numbers[i][j] = temp + numbers[i][j - 1];
        }
    }

    while (m--)
    {
        cin >> a1 >> b1 >> a2 >> b2;
        int answer = 0;

        for (int i = a1; i <= a2; i++)
        {
            answer += (numbers[i][b2] - numbers[i][b1 - 1]);
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
