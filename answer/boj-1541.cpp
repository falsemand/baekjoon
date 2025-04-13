#include <bits/stdc++.h>

using namespace std;

int answer;
string s;

void solution()
{
    cin >> s;

    int num = 0;
    bool isSub = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-')
        {
            if (isSub)
            {
                answer -= num;
                num = 0;
            }
            else
            {
                answer += num;
                num = 0;

                if (s[i] == '-')
                    isSub = true;
            }
        }

        else
        {
            num *= 10;
            num += s[i] - '0';
        }
    }

    if (num != 0)
    {
        if (isSub)
            answer -= num;
        else
            answer += num;

        num = 0;
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
