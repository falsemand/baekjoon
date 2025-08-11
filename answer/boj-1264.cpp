#include <bits/stdc++.h>

using namespace std;

char moum[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
string s;

bool check(char c)
{
    for (int i = 0; i < 10; i++)
    {
        if (c == moum[i])
        {
            return true;
        }
    }

    return false;
}

void solution()
{
    while (true)
    {
        getline(cin, s);

        if (s == "#")
        {
            break;
        }

        int cnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (check(s[i]))
            {
                cnt++;
            }
        }

        cout << cnt << "\n";
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
