#include <bits/stdc++.h>

using namespace std;

int k, last;
int a[1024];
vector<int> answer[11];

void go(int s, int e, int level)
{
    if (s > e)
        return;

    if(s==e)
    {
        answer[level].push_back(a[s]);
        return;
    }

    int mid = (s + e) / 2;
    answer[level].push_back(a[mid]);
    go(s, mid - 1, level + 1);
    go(mid + 1, e, level + 1);
}

void solution()
{
    cin >> k;
    last = (int)pow(2, k) - 1;

    for (int i = 0; i < last; i++)
    {
        cin >> a[i];
    }

    go(0, last, 1);

    for (int i = 1; i <= k; i++)
    {
        for (int j : answer[i])
        {
            cout << j << " ";
        }
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
