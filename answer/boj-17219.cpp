#include <bits/stdc++.h>

using namespace std;

int n, m;

void solution()
{
    cin >> n >> m;

    map<string, string> data;

    for (int i = 0; i < n; i++)
    {
        string url, password;
        cin >> url >> password;

        data[url] = password;
    }

    for (int i = 0; i < m; i++)
    {
        string url;
        cin >> url;

        cout << data[url] << "\n";
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
