#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll answer;
int n;
stack<int> st;

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        while (!st.empty() && st.top() <= temp)
        {
            st.pop();
        }

        answer += st.size();
        st.push(temp);
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
