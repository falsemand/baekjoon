#include <bits/stdc++.h>

using namespace std;

int t;

void solution()
{
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int temp = 0;
        bool flag1 = false, flag2 = false;
        int answer = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' || s[i] == '1')
            {
                if (temp % 2 != 0)
                    flag1 = true;

                answer = s[i] - '0';
                temp = 0;
            }

            else
            {
                temp++;
            }
        }

        if (temp > 0)
            flag2 = true;

        if (flag2)
            answer = 1;

        if (flag1)
        {
            if (answer == 1)
                answer = 0;
            else if (answer == 0)
                answer = 1;
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