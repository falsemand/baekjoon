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

    if(flag)
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