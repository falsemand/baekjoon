#include <bits/stdc++.h>

using namespace std;

int n, length;
pair<int, int> answer[1000001];
int lis[1000001];
stack<int> st;

void solution()
{
    cin >> n;

    fill(lis, lis + 1000001, INT_MAX);

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        auto lowerIdx = lower_bound(lis, lis + length, num);
        int idx = (int)(lower_bound(lis, lis + length, num) - lis);

        if (*lowerIdx == INT_MAX)
            length++;

        *lowerIdx = num;

        answer[i].first = idx;
        answer[i].second = num;
    }

    cout << length << "\n";

    for (int i = n - 1; i >= 0; i--)
    {
        if (answer[i].first == length - 1)
        {
            st.push(answer[i].second);
            length--;
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}