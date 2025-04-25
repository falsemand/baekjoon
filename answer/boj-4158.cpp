#include <bits/stdc++.h>

using namespace std;

int answer, n, m;

void solution()
{
    while (true)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;

        vector<int> cd(n);
        answer = 0;

        for (int i = 0; i < n; i++)
            cin >> cd[i];

        for (int i = 0; i < m; i++)
        {
            int num;
            cin >> num;

            if (binary_search(cd.begin(), cd.end(), num))
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