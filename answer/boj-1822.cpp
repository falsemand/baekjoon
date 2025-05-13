#include <bits/stdc++.h>

using namespace std;

int n, m;

void solution()
{
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> answer;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        int left = 0, right = m - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (b[mid] == a[i])
            {
                flag = false;
                break;
            }

            if (b[mid] < a[i])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (flag)
        {
            answer.push_back(a[i]);
        }
    }

    if (answer.size() == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << answer.size() << "\n";

        for (int i = 0; i < answer.size(); i++)
            cout << answer[i] << " ";

        cout << "\n";
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
