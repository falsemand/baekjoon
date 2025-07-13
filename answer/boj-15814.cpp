#include <bits/stdc++.h>

using namespace std;

string s;
int t, a, b;

void solution()
{
    cin >> s;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        char temp = s[a];
        s[a] = s[b];
        s[b] = temp;
    }

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
