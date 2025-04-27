#include <bits/stdc++.h>

using namespace std;

int t;
string s;

bool isPalindrom(string str)
{
    int start = 0;
    int end = str.size() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
            return false;

        start++;
        end--;
    }

    return true;
}

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> s;

        if (isPalindrom(s))
        {
            cout << 0 << "\n";
            continue;
        }

        int left = 0, right = s.size() - 1;

        while (left < right)
        {
            if (s[left] != s[right])
            {
                string s1 = s.substr(0, left) + s.substr(left + 1, s.size() - left - 1);
                string s2 = s.substr(0, right) + s.substr(right + 1, s.size() - right - 1);

                if(isPalindrom(s1))
                {
                    cout << 1 << "\n";
                }
                else if(isPalindrom(s2))
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 2 << "\n";
                }
                
                break;
            }
            else
            {
                left++;
                right--;
            }
        }
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