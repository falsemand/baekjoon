#include <bits/stdc++.h>

using namespace std;

int answer, n;
stack<int> st;

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        st.push(num);
    }

    int temp = st.top();
    answer++;
    st.pop();

    while (!st.empty())
    {
        if (temp < st.top())
        {
            temp = st.top();
            answer++;
        }

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