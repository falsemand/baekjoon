#include <bits/stdc++.h>

using namespace std;

int n, idx;
string handle[101];

void solution()
{
    cin >> n >> idx;

    for (int i = 0; i < n; i++)
    {
        cin >> handle[i];
    }

    sort(handle, handle + n);

    cout << handle[idx - 1] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
