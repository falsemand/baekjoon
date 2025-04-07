#include <bits/stdc++.h>

using namespace std;

int answer, k;
stack<int> st;

void solution()
{
    cin >> k;

    while (k--)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            st.pop();
        }

        else
        {
            st.push(num);
        }
    }

    while (!st.empty())
    {
        answer += st.top();
        st.pop();
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
