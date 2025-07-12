#include <bits/stdc++.h>

using namespace std;

string s = "ILOVEYONSEI";
char c;
int answer, idx;

void solution()
{
    cin >> c;
    idx = c - 'A';

    for (int i = 0; i < s.size(); i++)
    {
        answer += abs((s[i] - 'A') - idx);
        idx = s[i] - 'A';
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
