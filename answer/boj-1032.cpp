#include <bits/stdc++.h>

using namespace std;

string answer;
int n;
string cmd[51];

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> cmd[i];

    for (int i = 0; i < cmd[0].size(); i++)
    {
        bool flag = true;
        char c = cmd[0][i];

        for (int j = 0; j < n; j++)
        {
            if (c != cmd[j][i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            answer += c;
        else
            answer += "?";
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

/*
#include<bits/stdc++.h>

using namespace std;


void solution()
{
    int n; cin >> n;

    string answer;

    if (n == 1)
    {
        cin >> answer;
        cout << answer << "\n";
    }

    else
    {
        cin >> answer;
        n--;

        while (n--)
        {
            string s; cin >> s;

            for (int i = 0; i < answer.size(); i++)
            {
                if (s[i] != answer[i])
                    answer[i] = '?';
            }
        }

        cout << answer << "\n";
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
*/