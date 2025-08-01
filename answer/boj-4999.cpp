#include <bits/stdc++.h>

using namespace std;

string s1, s2;

void solution()
{
    cin >> s1;
    cin >> s2;

    if (s1.size() >= s2.size())
    {
        cout << "go\n";
    }
    else
    {
        cout << "no\n";
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
