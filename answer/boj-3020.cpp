#include <bits/stdc++.h>

using namespace std;

#define MAX 500001

int answer, n, h;
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};
int bottom[MAX];
int top[MAX];

void solution()
{
    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        int height;
        cin >> height;

        if (i & 1)
        {
            top[h - height + 1]++;
        }
        else
        {
            bottom[height]++;
        }
    }

    for (int i = h - 1; i >= 1; i--)
    {
        bottom[i] += bottom[i + 1];
    }

    for (int i = 1; i <= h; i++)
    {
        top[i] += top[i - 1];
    }

    vector<int> v;

    for (int i = 1; i <= h; i++)
    {
        v.push_back(top[i] + bottom[i]);
    }

    sort(v.begin(), v.end());

    int idx = upper_bound(v.begin(), v.end(), v[0]) - v.begin();

    cout << v[0] << " " << idx << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
