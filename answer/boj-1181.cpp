#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;

    vector<string> v(n, "");

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), [](string s1, string s2)
         { 
            if (s1.size() == s2.size())
                return s1 < s2;

            return s1.size() < s2.size(); });

    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto &s : v)
        cout << s << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
