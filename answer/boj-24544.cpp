#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v1[i];

    for (int i = 0; i < n; i++)
        cin >> v2[i];

    cout << accumulate(v1.begin(), v1.end(), 0) << "\n";

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if(0 == v2[i])
            sum += v1[i];
    }

    cout << sum << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}