#include <bits/stdc++.h>

using namespace std;

string s;

void solution()
{
    cin >> s;

    int left = 0, right = s.size() - 1;

    bool flag = true;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            flag = false;
            break;
        }

        left++;
        right--;
    }

    if (flag)
        cout << 1 << "\n";
    else
        cout << 0 << "\n";
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
#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;

    int answer = 1;
    int iIndex = s.length() / 2;

    for (int i = 0; i < iIndex; i++)
    {
        if (s[i] != s[s.length() -1 - i])
        {
            answer = 0;
            break;
        }
    }

    cout << answer << "\n";

    return 0;
}

*/