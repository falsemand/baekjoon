#include <bits/stdc++.h>

using namespace std;

string s;
int answer, x = 1;
stack<char> st;

void solution()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            x *= 2;
            st.push(s[i]);
        }
        else if (s[i] == '[')
        {
            x *= 3;
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                answer = 0;
                break;
            }
            else if (s[i - 1] == '(')
            {
                answer += x;
                x /= 2;
                st.pop();
            }
            else
            {
                x /= 2;
                st.pop();
            }
        }
        else if (s[i] == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                answer = 0;
                break;
            }
            else if (s[i - 1] == '[')
            {
                answer += x;
                x /= 3;
                st.pop();
            }
            else
            {
                x /= 3;
                st.pop();
            }
        }
    }

    if (!st.empty())
        answer = 0;

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
