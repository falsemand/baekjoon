#include <bits/stdc++.h>

using namespace std;

string str, exStr;

void solution()
{
    cin >> str;
    cin >> exStr;

    string revExStr = exStr;
    reverse(revExStr.begin(), revExStr.end());
    int exSize = exStr.size();

    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        st.push(str[i]);

        if (str[i] == exStr[exSize - 1] && st.size() >= exStr.size())
        {
            string s;

            for (int i = 0; i < exSize; i++)
            {
                s += st.top();
                st.pop();
            }

            if (0 != s.compare(revExStr))
            {
                for (int i = exSize - 1; i >= 0; i--)
                {
                    st.push(s[i]);
                }
            }
        }
    }

    if (st.empty())
    {
        cout << "FRULA\n";
    }

    else
    {
        string s;
        int size = st.size();
        for (int i = 0; i < size; i++)
        {
            s += st.top();
            st.pop();
        }

        reverse(s.begin(), s.end());

        cout << s << "\n";
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
