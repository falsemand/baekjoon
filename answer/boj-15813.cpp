#include <bits/stdc++.h>

using namespace std;

int answer, n;
string name;

void solution()
{
    cin >> n;
    cin >> name;

    for (int i = 0; i < n; i++)
        answer += (name[i] - 64);

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