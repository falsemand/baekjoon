#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (6 <= s.size() && 9 >= s.size())
            cout << "yes\n";
        else
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