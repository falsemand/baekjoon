#include <bits/stdc++.h>

using namespace std;

int t, n;

pair<int, int> fibo[41];

void solution()
{
    fibo[0].first = 1;
    fibo[0].second = 0;

    fibo[1].first = 0;
    fibo[1].second = 1;

    for (int i = 2; i < 41; i++)
    {
        fibo[i].first = fibo[i - 1].first + fibo[i - 2].first;
        fibo[i].second = fibo[i - 1].second + fibo[i - 2].second;
    }

    cin >> t;

    while (t--)
    {
        cin >> n;
        cout << fibo[n].first << " " << fibo[n].second << "\n";
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