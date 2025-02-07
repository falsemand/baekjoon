#include <bits/stdc++.h>

using namespace std;

int answer, n;
char game;
map<string, int> user;

void solution()
{
    cin >> n >> game;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        user[s] += 1;
    }

    if('Y' == game)
    {
        answer = user.size();
    }

    else if('F' == game)
    {
        answer = user.size() / 2;
    }

    else if('O' == game)
    {
        answer = user.size() / 3;
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