#include <bits/stdc++.h>

using namespace std;

int answer, n;
string s, comp = "ABBDOPQRabdegopq@";

void solution()
{
    getline(cin, s);

    for (char &c : s)
    {
        answer += count(comp.begin(), comp.end(), c);
    }

    cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
