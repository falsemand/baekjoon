#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    vector<int> v;

    int temp;

    while (cin >> temp)
    {
        v.push_back(temp);
    }

    cout << accumulate(v.begin(), v.end(), 0) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
