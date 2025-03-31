#include <bits/stdc++.h>

using namespace std;

int n;
unordered_map<string, int> m;

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        m[s]++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        string s;
        cin >> s;

        m.erase(s);
    }

    auto iter = m.begin();

    cout << (*iter).first << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}