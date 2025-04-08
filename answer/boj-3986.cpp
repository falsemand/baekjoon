#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
                st.push(s[i]);

            else
            {
                if (st.top() == s[i])
                {
                    st.pop();
                }

                else
                {
                    st.push(s[i]);
                }
            }
        }

        if (st.empty())
            answer++;
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
