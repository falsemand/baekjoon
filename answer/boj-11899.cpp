#include <bits/stdc++.h>

using namespace std;

int answer;
string s;
stack<char> st;

void solution()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            if (st.empty())
            {
                answer++;
            }
            else
            {
                st.pop();
            }
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
    }

    answer += st.size();

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
