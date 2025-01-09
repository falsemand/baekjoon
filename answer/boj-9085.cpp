#include <bits/stdc++.h>

using namespace std;

int t, n;
int answer;

void solution()
{
    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        answer = accumulate(v.begin(), v.end(), 0);

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