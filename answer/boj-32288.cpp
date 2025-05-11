#include <bits/stdc++.h>

using namespace std;

int n;
string s;

void solution()
{
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            cout << "i";
        }
        else if (s[i] == 'l')
        {
            cout << "L";
        }
    }

    cout << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
