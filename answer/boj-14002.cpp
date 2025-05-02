#include <bits/stdc++.h>

using namespace std;

int n, length;
int a[1001];
int dp[1001];
vector<int> lis, answer;

void solution()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    lis.push_back(a[1]);

    for (int i = 2; i <= n; i++)
    {
        if (lis[length] < a[i])
        {
            lis.push_back(a[i]);
            length++;
            dp[i] = length;
        }
        else
        {
            int pos = lower_bound(lis.begin(), lis.end(), a[i]) - lis.begin();
            lis[pos] = a[i];
            dp[i] = pos;
        }
    }

    int lisSize = length;

    for (int i = n; i >= 0; i--)
    {
        if (dp[i] == lisSize)
        {
            answer.push_back(a[i]);
            lisSize--;
        }
    }

    cout << answer.size() << "\n";
    int size = answer.size();

    for (int i = 0; i < size; i++)
    {
        cout << answer.back() << " ";
        answer.pop_back();
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
