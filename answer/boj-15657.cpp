#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[10];
int answer[10];

void go(int start, int idx)
{
    if(m == idx)
    {
        for (int i = 0; i < m; i++)
            cout << answer[i] << " ";

        cout << "\n";

        return;
    }

    for (int i = start; i < n; i++)
    {
        answer[idx] = arr[i];
        go(i, idx + 1);
    }
}

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    go(0, 0);
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}