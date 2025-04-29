#include <bits/stdc++.h>

using namespace std;

int t, k;
string w;

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> w;
        cin >> k;

        vector<vector<int>> eng(26, vector<int>());

        for (int i = 0; i < w.size(); i++)
        {
            eng[w[i] - 'a'].push_back(i);
        }

        int start = INT_MAX, end = -1;

        for (int i = 0; i < 26; i++)
        {
            if (eng[i].size() < k)
                continue;

            int left = 0;
            int right = k - 1;

            while (right < eng[i].size())
            {
                start = min(start, eng[i][right] - eng[i][left] + 1);
                end = max(end, eng[i][right] - eng[i][left] + 1);

                left++;
                right++;
            }
        }

        if (start == INT_MAX && end == -1)
        {
            cout << -1 << "\n";
        }
        else
            cout << start << " " << end << "\n";
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
