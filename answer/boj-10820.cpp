#include <bits/stdc++.h>

using namespace std;

string s;
int cntS, cntL, cntNum, cntEm;

void solution()
{
    while (getline(cin, s))
    {
        cntS = cntL = cntNum = cntEm = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (64 < s[i] && s[i] < 91)
            {
                cntL++;
            }

            else if (96 < s[i] && s[i] < 123)
            {
                cntS++;
            }

            else if (0 <= s[i] - '0' && s[i] - '0' < 10)
            {
                cntNum++;
            }

            else if (s[i] == ' ')
            {
                cntEm++;
            }
        }

        cout << cntS << " " << cntL << " " << cntNum << " " << cntEm << "\n";
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